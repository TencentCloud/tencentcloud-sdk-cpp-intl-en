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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_REGIONINSTANCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_REGIONINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Region information
                */
                class RegionInstance : public AbstractModel
                {
                public:
                    RegionInstance();
                    ~RegionInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RegionName Region name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _regionName Region name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _regionId Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Region status
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Region status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _status Region status
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Status of region-related features (return all attributes in JSON format)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FeatureGates Status of region-related features (return all attributes in JSON format)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFeatureGates() const;

                    /**
                     * 设置Status of region-related features (return all attributes in JSON format)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _featureGates Status of region-related features (return all attributes in JSON format)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFeatureGates(const std::string& _featureGates);

                    /**
                     * 判断参数 FeatureGates 是否已赋值
                     * @return FeatureGates 是否已赋值
                     * 
                     */
                    bool FeatureGatesHasBeenSet() const;

                    /**
                     * 获取Region abbreviation
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Alias Region abbreviation
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Region abbreviation
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _alias Region abbreviation
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Whitelisted location
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Remark Whitelisted location
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Whitelisted location
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _remark Whitelisted location
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Region name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Region ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status of region-related features (return all attributes in JSON format)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_featureGates;
                    bool m_featureGatesHasBeenSet;

                    /**
                     * Region abbreviation
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Whitelisted location
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_REGIONINSTANCE_H_
