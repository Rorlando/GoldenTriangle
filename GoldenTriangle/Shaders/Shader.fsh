//
//  Shader.fsh
//  GoldenTriangle
//
//  Created by Anthony Orlando on 10/18/12.
//  Copyright (c) 2012 Ryan Orlando. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
