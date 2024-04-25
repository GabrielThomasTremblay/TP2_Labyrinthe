


let project = new Project('Labyrinthe');

project.kore = false;
project.cmd = true;

project.addFile('Sources/**');
project.setDebugDir('Deployment');



resolve(project);
