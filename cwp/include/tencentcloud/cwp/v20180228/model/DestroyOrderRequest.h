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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESTROYORDERREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESTROYORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DestroyOrder request structure.
                */
                class DestroyOrderRequest : public AbstractModel
                {
                public:
                    DestroyOrderRequest();
                    ~DestroyOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     * @return LicenseType Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     * @param _licenseType Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                private:

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESTROYORDERREQUEST_H_
