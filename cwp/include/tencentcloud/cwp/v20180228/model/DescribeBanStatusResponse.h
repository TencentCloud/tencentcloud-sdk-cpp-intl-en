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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANSTATUSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANSTATUSRESPONSE_H_

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
                * DescribeBanStatus response structure.
                */
                class DescribeBanStatusResponse : public AbstractModel
                {
                public:
                    DescribeBanStatusResponse();
                    ~DescribeBanStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Blocking enabling status:
0: disabled 
1: advanced blocking
2: basic blocking (block only malicious IP addresses in the intelligence database)
                     * @return Status Blocking enabling status:
0: disabled 
1: advanced blocking
2: basic blocking (block only malicious IP addresses in the intelligence database)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether to display the pop-up prompt. False: no; true: yes.
                     * @return ShowTips Whether to display the pop-up prompt. False: no; true: yes.
                     * 
                     */
                    bool GetShowTips() const;

                    /**
                     * 判断参数 ShowTips 是否已赋值
                     * @return ShowTips 是否已赋值
                     * 
                     */
                    bool ShowTipsHasBeenSet() const;

                    /**
                     * 获取Whether to enable intelligent over-allowing mode
                     * @return OpenSmartMode Whether to enable intelligent over-allowing mode
                     * 
                     */
                    bool GetOpenSmartMode() const;

                    /**
                     * 判断参数 OpenSmartMode 是否已赋值
                     * @return OpenSmartMode 是否已赋值
                     * 
                     */
                    bool OpenSmartModeHasBeenSet() const;

                private:

                    /**
                     * Blocking enabling status:
0: disabled 
1: advanced blocking
2: basic blocking (block only malicious IP addresses in the intelligence database)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether to display the pop-up prompt. False: no; true: yes.
                     */
                    bool m_showTips;
                    bool m_showTipsHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANSTATUSRESPONSE_H_
