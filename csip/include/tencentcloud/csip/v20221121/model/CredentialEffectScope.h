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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREDENTIALEFFECTSCOPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREDENTIALEFFECTSCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Effective machine range, used to specify which machines the credential takes effect on
                */
                class CredentialEffectScope : public AbstractModel
                {
                public:
                    CredentialEffectScope();
                    ~CredentialEffectScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to exclude the mode
Enumeration values:
0: Inclusion mode (only takes effect on the Real Server in Instances). At this point, Instances is required.
1: Exclusion mode (Machines in Instances do not take effect, remaining machines take effect). At this point, Instances is selectable (Empty list means all machines take effect).
                     * @return Exclude Whether to exclude the mode
Enumeration values:
0: Inclusion mode (only takes effect on the Real Server in Instances). At this point, Instances is required.
1: Exclusion mode (Machines in Instances do not take effect, remaining machines take effect). At this point, Instances is selectable (Empty list means all machines take effect).
                     * 
                     */
                    int64_t GetExclude() const;

                    /**
                     * 设置Whether to exclude the mode
Enumeration values:
0: Inclusion mode (only takes effect on the Real Server in Instances). At this point, Instances is required.
1: Exclusion mode (Machines in Instances do not take effect, remaining machines take effect). At this point, Instances is selectable (Empty list means all machines take effect).
                     * @param _exclude Whether to exclude the mode
Enumeration values:
0: Inclusion mode (only takes effect on the Real Server in Instances). At this point, Instances is required.
1: Exclusion mode (Machines in Instances do not take effect, remaining machines take effect). At this point, Instances is selectable (Empty list means all machines take effect).
                     * 
                     */
                    void SetExclude(const int64_t& _exclude);

                    /**
                     * 判断参数 Exclude 是否已赋值
                     * @return Exclude 是否已赋值
                     * 
                     */
                    bool ExcludeHasBeenSet() const;

                    /**
                     * 获取Machine instance ID list. Required when Exclude is 0, means only these machines can access the credential; Option when Exclude is 1, means these machines cannot access the credential (Empty list means all machines take effect).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Instances Machine instance ID list. Required when Exclude is 0, means only these machines can access the credential; Option when Exclude is 1, means these machines cannot access the credential (Empty list means all machines take effect).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetInstances() const;

                    /**
                     * 设置Machine instance ID list. Required when Exclude is 0, means only these machines can access the credential; Option when Exclude is 1, means these machines cannot access the credential (Empty list means all machines take effect).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instances Machine instance ID list. Required when Exclude is 0, means only these machines can access the credential; Option when Exclude is 1, means these machines cannot access the credential (Empty list means all machines take effect).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstances(const std::vector<std::string>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * Whether to exclude the mode
Enumeration values:
0: Inclusion mode (only takes effect on the Real Server in Instances). At this point, Instances is required.
1: Exclusion mode (Machines in Instances do not take effect, remaining machines take effect). At this point, Instances is selectable (Empty list means all machines take effect).
                     */
                    int64_t m_exclude;
                    bool m_excludeHasBeenSet;

                    /**
                     * Machine instance ID list. Required when Exclude is 0, means only these machines can access the credential; Option when Exclude is 1, means these machines cannot access the credential (Empty list means all machines take effect).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREDENTIALEFFECTSCOPE_H_
