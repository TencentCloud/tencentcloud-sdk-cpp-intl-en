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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELICENSESTATUSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELICENSESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LicenseStatusItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeLicenseStatus response structure.
                */
                class DescribeLicenseStatusResponse : public AbstractModel
                {
                public:
                    DescribeLicenseStatusResponse();
                    ~DescribeLicenseStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Authorization status list (flagship edition → pro edition → RASP)</p>
                     * @return List <p>Authorization status list (flagship edition → pro edition → RASP)</p>
                     * 
                     */
                    std::vector<LicenseStatusItem> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>Auto-purchase switch. 0: off; 1: on</p>
                     * @return AutoRepurchaseSwitch <p>Auto-purchase switch. 0: off; 1: on</p>
                     * 
                     */
                    int64_t GetAutoRepurchaseSwitch() const;

                    /**
                     * 判断参数 AutoRepurchaseSwitch 是否已赋值
                     * @return AutoRepurchaseSwitch 是否已赋值
                     * 
                     */
                    bool AutoRepurchaseSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Merged unconsumed unbinding count = (Flagship Edition total + Pro Edition total) × 2 - Unbound count in the current month</p>
                     * @return UnbindCountLeft <p>Merged unconsumed unbinding count = (Flagship Edition total + Pro Edition total) × 2 - Unbound count in the current month</p>
                     * 
                     */
                    int64_t GetUnbindCountLeft() const;

                    /**
                     * 判断参数 UnbindCountLeft 是否已赋值
                     * @return UnbindCountLeft 是否已赋值
                     * 
                     */
                    bool UnbindCountLeftHasBeenSet() const;

                private:

                    /**
                     * <p>Authorization status list (flagship edition → pro edition → RASP)</p>
                     */
                    std::vector<LicenseStatusItem> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>Auto-purchase switch. 0: off; 1: on</p>
                     */
                    int64_t m_autoRepurchaseSwitch;
                    bool m_autoRepurchaseSwitchHasBeenSet;

                    /**
                     * <p>Merged unconsumed unbinding count = (Flagship Edition total + Pro Edition total) × 2 - Unbound count in the current month</p>
                     */
                    int64_t m_unbindCountLeft;
                    bool m_unbindCountLeftHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELICENSESTATUSRESPONSE_H_
