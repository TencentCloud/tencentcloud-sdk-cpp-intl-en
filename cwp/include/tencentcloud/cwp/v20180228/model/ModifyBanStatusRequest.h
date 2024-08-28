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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANSTATUSREQUEST_H_

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
                * ModifyBanStatus request structure.
                */
                class ModifyBanStatusRequest : public AbstractModel
                {
                public:
                    ModifyBanStatusRequest();
                    ~ModifyBanStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Blocking switch status: 0 -- off; 1 -- advanced blocking; 2 -- basic blocking (Only blocklisted IPs in the intelligence database will be blocked.)
                     * @return Status Blocking switch status: 0 -- off; 1 -- advanced blocking; 2 -- basic blocking (Only blocklisted IPs in the intelligence database will be blocked.)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Blocking switch status: 0 -- off; 1 -- advanced blocking; 2 -- basic blocking (Only blocklisted IPs in the intelligence database will be blocked.)
                     * @param _status Blocking switch status: 0 -- off; 1 -- advanced blocking; 2 -- basic blocking (Only blocklisted IPs in the intelligence database will be blocked.)
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether to enable intelligent over-allowing mode
                     * @return OpenSmartMode Whether to enable intelligent over-allowing mode
                     * 
                     */
                    bool GetOpenSmartMode() const;

                    /**
                     * 设置Whether to enable intelligent over-allowing mode
                     * @param _openSmartMode Whether to enable intelligent over-allowing mode
                     * 
                     */
                    void SetOpenSmartMode(const bool& _openSmartMode);

                    /**
                     * 判断参数 OpenSmartMode 是否已赋值
                     * @return OpenSmartMode 是否已赋值
                     * 
                     */
                    bool OpenSmartModeHasBeenSet() const;

                private:

                    /**
                     * Blocking switch status: 0 -- off; 1 -- advanced blocking; 2 -- basic blocking (Only blocklisted IPs in the intelligence database will be blocked.)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether to enable intelligent over-allowing mode
                     */
                    bool m_openSmartMode;
                    bool m_openSmartModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANSTATUSREQUEST_H_
