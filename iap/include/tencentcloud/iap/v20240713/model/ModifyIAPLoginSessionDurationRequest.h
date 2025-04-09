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

#ifndef TENCENTCLOUD_IAP_V20240713_MODEL_MODIFYIAPLOGINSESSIONDURATIONREQUEST_H_
#define TENCENTCLOUD_IAP_V20240713_MODEL_MODIFYIAPLOGINSESSIONDURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iap
    {
        namespace V20240713
        {
            namespace Model
            {
                /**
                * ModifyIAPLoginSessionDuration request structure.
                */
                class ModifyIAPLoginSessionDurationRequest : public AbstractModel
                {
                public:
                    ModifyIAPLoginSessionDurationRequest();
                    ~ModifyIAPLoginSessionDurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Login session duration.
                     * @return Duration Login session duration.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Login session duration.
                     * @param _duration Login session duration.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * Login session duration.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAP_V20240713_MODEL_MODIFYIAPLOGINSESSIONDURATIONREQUEST_H_
