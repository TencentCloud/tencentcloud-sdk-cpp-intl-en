/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TAGCOMPLIANCEDETAILS_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TAGCOMPLIANCEDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Tag compliance information.
                */
                class TagComplianceDetails : public AbstractModel
                {
                public:
                    TagComplianceDetails();
                    ~TagComplianceDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compliance status. true: compliant; false: non-compliant.
                     * @return ComplianceStatus Compliance status. true: compliant; false: non-compliant.
                     * 
                     */
                    bool GetComplianceStatus() const;

                    /**
                     * 设置Compliance status. true: compliant; false: non-compliant.
                     * @param _complianceStatus Compliance status. true: compliant; false: non-compliant.
                     * 
                     */
                    void SetComplianceStatus(const bool& _complianceStatus);

                    /**
                     * 判断参数 ComplianceStatus 是否已赋值
                     * @return ComplianceStatus 是否已赋值
                     * 
                     */
                    bool ComplianceStatusHasBeenSet() const;

                    /**
                     * 获取List of tag keys with invalid values.
                     * @return KeysWithNonCompliantValues List of tag keys with invalid values.
                     * 
                     */
                    std::vector<std::string> GetKeysWithNonCompliantValues() const;

                    /**
                     * 设置List of tag keys with invalid values.
                     * @param _keysWithNonCompliantValues List of tag keys with invalid values.
                     * 
                     */
                    void SetKeysWithNonCompliantValues(const std::vector<std::string>& _keysWithNonCompliantValues);

                    /**
                     * 判断参数 KeysWithNonCompliantValues 是否已赋值
                     * @return KeysWithNonCompliantValues 是否已赋值
                     * 
                     */
                    bool KeysWithNonCompliantValuesHasBeenSet() const;

                    /**
                     * 获取List of invalid tag keys.
                     * @return NonCompliantKeys List of invalid tag keys.
                     * 
                     */
                    std::vector<std::string> GetNonCompliantKeys() const;

                    /**
                     * 设置List of invalid tag keys.
                     * @param _nonCompliantKeys List of invalid tag keys.
                     * 
                     */
                    void SetNonCompliantKeys(const std::vector<std::string>& _nonCompliantKeys);

                    /**
                     * 判断参数 NonCompliantKeys 是否已赋值
                     * @return NonCompliantKeys 是否已赋值
                     * 
                     */
                    bool NonCompliantKeysHasBeenSet() const;

                private:

                    /**
                     * Compliance status. true: compliant; false: non-compliant.
                     */
                    bool m_complianceStatus;
                    bool m_complianceStatusHasBeenSet;

                    /**
                     * List of tag keys with invalid values.
                     */
                    std::vector<std::string> m_keysWithNonCompliantValues;
                    bool m_keysWithNonCompliantValuesHasBeenSet;

                    /**
                     * List of invalid tag keys.
                     */
                    std::vector<std::string> m_nonCompliantKeys;
                    bool m_nonCompliantKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TAGCOMPLIANCEDETAILS_H_
