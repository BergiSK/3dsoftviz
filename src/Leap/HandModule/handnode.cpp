/**
 * Created by Patrik Berger on 13.11.2016.
 */
#include <easylogging++.h>
#include "Leap/HandModule/HandNode.h"

Leap::HandNode::HandNode(){}

void Leap::HandNode::initStructure(){}

void Leap::HandNode::generateGeometry(float radius) {
    osg::ref_ptr<osg::Geode> handGeode( new osg::Geode );
    osg::ref_ptr<osg::Sphere> handSphere = new osg::Sphere( osg::Vec3f( 0.0f,0.0f,0.0f ), radius );

    osg::ref_ptr<osg::ShapeDrawable> handDrawable( new osg::ShapeDrawable( handSphere.get() ) );
    handGeode->addDrawable( handDrawable.get() );

    this->addChild( handGeode.get() );




}