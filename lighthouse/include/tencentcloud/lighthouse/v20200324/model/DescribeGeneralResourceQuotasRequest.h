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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeGeneralResourceQuotas request structure.
                */
                class DescribeGeneralResourceQuotasRequest : public AbstractModel
                {
                public:
                    DescribeGeneralResourceQuotasRequest();
                    ~DescribeGeneralResourceQuotasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource name list. Values:
- `GENERAL_BUNDLE_INSTANCE`: General bundle
- `STORAGE_BUNDLE_INSTANCE`:  Storage bundle 
- `ENTERPRISE_BUNDLE_INSTANCE`: Enterprise bundle 
- `EXCLUSIVE_BUNDLE_INSTANCE`： Dedicated bundle
- `BEFAST_BUNDLE_INSTANCE`: BeFast bundle
- `USER_KEY_PAIR`: Key pair
- `SNAPSHOT`: Snapshot
- `BLUEPRINT`: Custom image
- `FREE_BLUEPRINT`: Free custom image
- `DATA_DISK`: Data disk
- `FIREWALL_RULE`: Firewall rules
                     * @return ResourceNames Resource name list. Values:
- `GENERAL_BUNDLE_INSTANCE`: General bundle
- `STORAGE_BUNDLE_INSTANCE`:  Storage bundle 
- `ENTERPRISE_BUNDLE_INSTANCE`: Enterprise bundle 
- `EXCLUSIVE_BUNDLE_INSTANCE`： Dedicated bundle
- `BEFAST_BUNDLE_INSTANCE`: BeFast bundle
- `USER_KEY_PAIR`: Key pair
- `SNAPSHOT`: Snapshot
- `BLUEPRINT`: Custom image
- `FREE_BLUEPRINT`: Free custom image
- `DATA_DISK`: Data disk
- `FIREWALL_RULE`: Firewall rules
                     * 
                     */
                    std::vector<std::string> GetResourceNames() const;

                    /**
                     * 设置Resource name list. Values:
- `GENERAL_BUNDLE_INSTANCE`: General bundle
- `STORAGE_BUNDLE_INSTANCE`:  Storage bundle 
- `ENTERPRISE_BUNDLE_INSTANCE`: Enterprise bundle 
- `EXCLUSIVE_BUNDLE_INSTANCE`： Dedicated bundle
- `BEFAST_BUNDLE_INSTANCE`: BeFast bundle
- `USER_KEY_PAIR`: Key pair
- `SNAPSHOT`: Snapshot
- `BLUEPRINT`: Custom image
- `FREE_BLUEPRINT`: Free custom image
- `DATA_DISK`: Data disk
- `FIREWALL_RULE`: Firewall rules
                     * @param _resourceNames Resource name list. Values:
- `GENERAL_BUNDLE_INSTANCE`: General bundle
- `STORAGE_BUNDLE_INSTANCE`:  Storage bundle 
- `ENTERPRISE_BUNDLE_INSTANCE`: Enterprise bundle 
- `EXCLUSIVE_BUNDLE_INSTANCE`： Dedicated bundle
- `BEFAST_BUNDLE_INSTANCE`: BeFast bundle
- `USER_KEY_PAIR`: Key pair
- `SNAPSHOT`: Snapshot
- `BLUEPRINT`: Custom image
- `FREE_BLUEPRINT`: Free custom image
- `DATA_DISK`: Data disk
- `FIREWALL_RULE`: Firewall rules
                     * 
                     */
                    void SetResourceNames(const std::vector<std::string>& _resourceNames);

                    /**
                     * 判断参数 ResourceNames 是否已赋值
                     * @return ResourceNames 是否已赋值
                     * 
                     */
                    bool ResourceNamesHasBeenSet() const;

                private:

                    /**
                     * Resource name list. Values:
- `GENERAL_BUNDLE_INSTANCE`: General bundle
- `STORAGE_BUNDLE_INSTANCE`:  Storage bundle 
- `ENTERPRISE_BUNDLE_INSTANCE`: Enterprise bundle 
- `EXCLUSIVE_BUNDLE_INSTANCE`： Dedicated bundle
- `BEFAST_BUNDLE_INSTANCE`: BeFast bundle
- `USER_KEY_PAIR`: Key pair
- `SNAPSHOT`: Snapshot
- `BLUEPRINT`: Custom image
- `FREE_BLUEPRINT`: Free custom image
- `DATA_DISK`: Data disk
- `FIREWALL_RULE`: Firewall rules
                     */
                    std::vector<std::string> m_resourceNames;
                    bool m_resourceNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASREQUEST_H_
