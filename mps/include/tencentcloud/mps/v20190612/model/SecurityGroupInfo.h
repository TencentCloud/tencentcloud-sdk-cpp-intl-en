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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SECURITYGROUPINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SECURITYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Security group information.
                */
                class SecurityGroupInfo : public AbstractModel
                {
                public:
                    SecurityGroupInfo();
                    ~SecurityGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Security group ID.
                     * @return Id Security group ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Security group ID.
                     * @param _id Security group ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Security group name.
                     * @return Name Security group name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Security group name.
                     * @param _name Security group name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Allowlist list.
                     * @return Whitelist Allowlist list.
                     * 
                     */
                    std::vector<std::string> GetWhitelist() const;

                    /**
                     * 设置Allowlist list.
                     * @param _whitelist Allowlist list.
                     * 
                     */
                    void SetWhitelist(const std::vector<std::string>& _whitelist);

                    /**
                     * 判断参数 Whitelist 是否已赋值
                     * @return Whitelist 是否已赋值
                     * 
                     */
                    bool WhitelistHasBeenSet() const;

                    /**
                     * 获取List of bound input streams.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OccupiedInputs List of bound input streams.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetOccupiedInputs() const;

                    /**
                     * 设置List of bound input streams.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _occupiedInputs List of bound input streams.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOccupiedInputs(const std::vector<std::string>& _occupiedInputs);

                    /**
                     * 判断参数 OccupiedInputs 是否已赋值
                     * @return OccupiedInputs 是否已赋值
                     * 
                     */
                    bool OccupiedInputsHasBeenSet() const;

                    /**
                     * 获取Security group address.
                     * @return Region Security group address.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Security group address.
                     * @param _region Security group address.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取List of bound output streams.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OccupiedOutputs List of bound output streams.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetOccupiedOutputs() const;

                    /**
                     * 设置List of bound output streams.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _occupiedOutputs List of bound output streams.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOccupiedOutputs(const std::vector<std::string>& _occupiedOutputs);

                    /**
                     * 判断参数 OccupiedOutputs 是否已赋值
                     * @return OccupiedOutputs 是否已赋值
                     * 
                     */
                    bool OccupiedOutputsHasBeenSet() const;

                private:

                    /**
                     * Security group ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Security group name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Allowlist list.
                     */
                    std::vector<std::string> m_whitelist;
                    bool m_whitelistHasBeenSet;

                    /**
                     * List of bound input streams.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_occupiedInputs;
                    bool m_occupiedInputsHasBeenSet;

                    /**
                     * Security group address.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * List of bound output streams.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_occupiedOutputs;
                    bool m_occupiedOutputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SECURITYGROUPINFO_H_
