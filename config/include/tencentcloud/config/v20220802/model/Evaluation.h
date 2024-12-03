/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATION_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Annotation.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Custom rule evaluation result
                */
                class Evaluation : public AbstractModel
                {
                public:
                    Evaluation();
                    ~Evaluation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Evaluated resource id. It can contain 0 to 256 characters.
                     * @return ComplianceResourceId Evaluated resource id. It can contain 0 to 256 characters.
                     * 
                     */
                    std::string GetComplianceResourceId() const;

                    /**
                     * 设置Evaluated resource id. It can contain 0 to 256 characters.
                     * @param _complianceResourceId Evaluated resource id. It can contain 0 to 256 characters.
                     * 
                     */
                    void SetComplianceResourceId(const std::string& _complianceResourceId);

                    /**
                     * 判断参数 ComplianceResourceId 是否已赋值
                     * @return ComplianceResourceId 是否已赋值
                     * 
                     */
                    bool ComplianceResourceIdHasBeenSet() const;

                    /**
                     * 获取Evaluated resource type.
Supported:
QCS::CVM::Instance、 QCS::CBS::Disk、QCS::VPC::Vpc、QCS::VPC::Subnet、QCS::VPC::SecurityGroup、 QCS::CAM::User、QCS::CAM::Group、QCS::CAM::Policy、QCS::CAM::Role、QCS::COS::Bucket
                     * @return ComplianceResourceType Evaluated resource type.
Supported:
QCS::CVM::Instance、 QCS::CBS::Disk、QCS::VPC::Vpc、QCS::VPC::Subnet、QCS::VPC::SecurityGroup、 QCS::CAM::User、QCS::CAM::Group、QCS::CAM::Policy、QCS::CAM::Role、QCS::COS::Bucket
                     * 
                     */
                    std::string GetComplianceResourceType() const;

                    /**
                     * 设置Evaluated resource type.
Supported:
QCS::CVM::Instance、 QCS::CBS::Disk、QCS::VPC::Vpc、QCS::VPC::Subnet、QCS::VPC::SecurityGroup、 QCS::CAM::User、QCS::CAM::Group、QCS::CAM::Policy、QCS::CAM::Role、QCS::COS::Bucket
                     * @param _complianceResourceType Evaluated resource type.
Supported:
QCS::CVM::Instance、 QCS::CBS::Disk、QCS::VPC::Vpc、QCS::VPC::Subnet、QCS::VPC::SecurityGroup、 QCS::CAM::User、QCS::CAM::Group、QCS::CAM::Policy、QCS::CAM::Role、QCS::COS::Bucket
                     * 
                     */
                    void SetComplianceResourceType(const std::string& _complianceResourceType);

                    /**
                     * 判断参数 ComplianceResourceType 是否已赋值
                     * @return ComplianceResourceType 是否已赋值
                     * 
                     */
                    bool ComplianceResourceTypeHasBeenSet() const;

                    /**
                     * 获取Evaluated resource region.
It can contain 0 to 32 characters.
                     * @return ComplianceRegion Evaluated resource region.
It can contain 0 to 32 characters.
                     * 
                     */
                    std::string GetComplianceRegion() const;

                    /**
                     * 设置Evaluated resource region.
It can contain 0 to 32 characters.
                     * @param _complianceRegion Evaluated resource region.
It can contain 0 to 32 characters.
                     * 
                     */
                    void SetComplianceRegion(const std::string& _complianceRegion);

                    /**
                     * 判断参数 ComplianceRegion 是否已赋值
                     * @return ComplianceRegion 是否已赋值
                     * 
                     */
                    bool ComplianceRegionHasBeenSet() const;

                    /**
                     * 获取Compliance type. Valid values:
COMPLIANT: Compliant,
NON_COMPLIANT: Non-compliant
                     * @return ComplianceType Compliance type. Valid values:
COMPLIANT: Compliant,
NON_COMPLIANT: Non-compliant
                     * 
                     */
                    std::string GetComplianceType() const;

                    /**
                     * 设置Compliance type. Valid values:
COMPLIANT: Compliant,
NON_COMPLIANT: Non-compliant
                     * @param _complianceType Compliance type. Valid values:
COMPLIANT: Compliant,
NON_COMPLIANT: Non-compliant
                     * 
                     */
                    void SetComplianceType(const std::string& _complianceType);

                    /**
                     * 判断参数 ComplianceType 是否已赋值
                     * @return ComplianceType 是否已赋值
                     * 
                     */
                    bool ComplianceTypeHasBeenSet() const;

                    /**
                     * 获取Supplementary information for non-compliant resources.
                     * @return Annotation Supplementary information for non-compliant resources.
                     * 
                     */
                    Annotation GetAnnotation() const;

                    /**
                     * 设置Supplementary information for non-compliant resources.
                     * @param _annotation Supplementary information for non-compliant resources.
                     * 
                     */
                    void SetAnnotation(const Annotation& _annotation);

                    /**
                     * 判断参数 Annotation 是否已赋值
                     * @return Annotation 是否已赋值
                     * 
                     */
                    bool AnnotationHasBeenSet() const;

                private:

                    /**
                     * Evaluated resource id. It can contain 0 to 256 characters.
                     */
                    std::string m_complianceResourceId;
                    bool m_complianceResourceIdHasBeenSet;

                    /**
                     * Evaluated resource type.
Supported:
QCS::CVM::Instance、 QCS::CBS::Disk、QCS::VPC::Vpc、QCS::VPC::Subnet、QCS::VPC::SecurityGroup、 QCS::CAM::User、QCS::CAM::Group、QCS::CAM::Policy、QCS::CAM::Role、QCS::COS::Bucket
                     */
                    std::string m_complianceResourceType;
                    bool m_complianceResourceTypeHasBeenSet;

                    /**
                     * Evaluated resource region.
It can contain 0 to 32 characters.
                     */
                    std::string m_complianceRegion;
                    bool m_complianceRegionHasBeenSet;

                    /**
                     * Compliance type. Valid values:
COMPLIANT: Compliant,
NON_COMPLIANT: Non-compliant
                     */
                    std::string m_complianceType;
                    bool m_complianceTypeHasBeenSet;

                    /**
                     * Supplementary information for non-compliant resources.
                     */
                    Annotation m_annotation;
                    bool m_annotationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATION_H_
