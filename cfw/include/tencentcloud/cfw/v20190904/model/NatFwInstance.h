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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATFWINSTANCE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATFWINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * NAT instance type
                */
                class NatFwInstance : public AbstractModel
                {
                public:
                    NatFwInstance();
                    ~NatFwInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NAT instance ID
                     * @return NatinsId NAT instance ID
                     */
                    std::string GetNatinsId() const;

                    /**
                     * 设置NAT instance ID
                     * @param NatinsId NAT instance ID
                     */
                    void SetNatinsId(const std::string& _natinsId);

                    /**
                     * 判断参数 NatinsId 是否已赋值
                     * @return NatinsId 是否已赋值
                     */
                    bool NatinsIdHasBeenSet() const;

                    /**
                     * 获取NAT instance name
                     * @return NatinsName NAT instance name
                     */
                    std::string GetNatinsName() const;

                    /**
                     * 设置NAT instance name
                     * @param NatinsName NAT instance name
                     */
                    void SetNatinsName(const std::string& _natinsName);

                    /**
                     * 判断参数 NatinsName 是否已赋值
                     * @return NatinsName 是否已赋值
                     */
                    bool NatinsNameHasBeenSet() const;

                    /**
                     * 获取Instance region
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Region Instance region
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance region
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Region Instance region
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取0: create new; 1: use existing
Note: This field may return `null`, indicating that no valid value was found.
                     * @return FwMode 0: create new; 1: use existing
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t GetFwMode() const;

                    /**
                     * 设置0: create new; 1: use existing
Note: This field may return `null`, indicating that no valid value was found.
                     * @param FwMode 0: create new; 1: use existing
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetFwMode(const int64_t& _fwMode);

                    /**
                     * 判断参数 FwMode 是否已赋值
                     * @return FwMode 是否已赋值
                     */
                    bool FwModeHasBeenSet() const;

                    /**
                     * 获取0: normal; 1: creating
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Status 0: normal; 1: creating
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0: normal; 1: creating
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Status 0: normal; 1: creating
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取NAT public IP
Note: This field may return `null`, indicating that no valid value was found.
                     * @return NatIp NAT public IP
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetNatIp() const;

                    /**
                     * 设置NAT public IP
Note: This field may return `null`, indicating that no valid value was found.
                     * @param NatIp NAT public IP
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetNatIp(const std::string& _natIp);

                    /**
                     * 判断参数 NatIp 是否已赋值
                     * @return NatIp 是否已赋值
                     */
                    bool NatIpHasBeenSet() const;

                private:

                    /**
                     * NAT instance ID
                     */
                    std::string m_natinsId;
                    bool m_natinsIdHasBeenSet;

                    /**
                     * NAT instance name
                     */
                    std::string m_natinsName;
                    bool m_natinsNameHasBeenSet;

                    /**
                     * Instance region
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 0: create new; 1: use existing
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_fwMode;
                    bool m_fwModeHasBeenSet;

                    /**
                     * 0: normal; 1: creating
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * NAT public IP
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_natIp;
                    bool m_natIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATFWINSTANCE_H_
