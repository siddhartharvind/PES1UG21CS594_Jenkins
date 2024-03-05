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
        echo 'Deployment successful!'
      }
    }
  }
  post {
    failure {
      echo 'Pipeline failed!'
    }
  }
}
