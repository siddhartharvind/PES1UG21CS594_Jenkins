pipeline {
  agent any

  stages {
    stage('Build') {
      steps {
        build 'PES1UG21CS594-1'
        sh 'g++ main.cpp'
      }
    }
    stage ('Test') {
      steps {
        sh './a.out'
      }
    }
    stage ('Deploy') {
      steps {
        // Introducing an error into the Jenkinsfile!
        // Command `echp` does not exist.
        // Intended command: `echo`
        echp 'Deployment successful!'
      }
    }
  }
  post {
    failure {
      echo 'Pipeline failed!'
    }
  }
}
