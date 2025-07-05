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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSDEFENDSTATUSRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSDEFENDSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDDoSDefendStatus response structure.
                */
                class DescribeDDoSDefendStatusResponse : public AbstractModel
                {
                public:
                    DescribeDDoSDefendStatusResponse();
                    ~DescribeDDoSDefendStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Protection status. 0: disabled, 1: enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DefendStatus Protection status. 0: disabled, 1: enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDefendStatus() const;

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                    /**
                     * 获取Expiration time of temporary protection disablement. This field is empty if the protection is in enabled status;
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UndefendExpire Expiration time of temporary protection disablement. This field is empty if the protection is in enabled status;
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUndefendExpire() const;

                    /**
                     * 判断参数 UndefendExpire 是否已赋值
                     * @return UndefendExpire 是否已赋值
                     * 
                     */
                    bool UndefendExpireHasBeenSet() const;

                    /**
                     * 获取Console feature display field. 1: displays console features, 0: hides console features
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ShowFlag Console feature display field. 1: displays console features, 0: hides console features
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetShowFlag() const;

                    /**
                     * 判断参数 ShowFlag 是否已赋值
                     * @return ShowFlag 是否已赋值
                     * 
                     */
                    bool ShowFlagHasBeenSet() const;

                private:

                    /**
                     * Protection status. 0: disabled, 1: enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * Expiration time of temporary protection disablement. This field is empty if the protection is in enabled status;
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_undefendExpire;
                    bool m_undefendExpireHasBeenSet;

                    /**
                     * Console feature display field. 1: displays console features, 0: hides console features
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_showFlag;
                    bool m_showFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSDEFENDSTATUSRESPONSE_H_
