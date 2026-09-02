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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPRASPLICENSEUNBINDSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPRASPLICENSEUNBINDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LicenseUnbindFailedItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCSIPRaspLicenseUnBinds response structure.
                */
                class ModifyCSIPRaspLicenseUnBindsResponse : public AbstractModel
                {
                public:
                    ModifyCSIPRaspLicenseUnBindsResponse();
                    ~ModifyCSIPRaspLicenseUnBindsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Total.</p>
                     * @return Total <p>Total.</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>Number of successes</p>
                     * @return SuccessNum <p>Number of successes</p>
                     * 
                     */
                    int64_t GetSuccessNum() const;

                    /**
                     * 判断参数 SuccessNum 是否已赋值
                     * @return SuccessNum 是否已赋值
                     * 
                     */
                    bool SuccessNumHasBeenSet() const;

                    /**
                     * 获取<p>failure count</p>
                     * @return FailedNum <p>failure count</p>
                     * 
                     */
                    int64_t GetFailedNum() const;

                    /**
                     * 判断参数 FailedNum 是否已赋值
                     * @return FailedNum 是否已赋值
                     * 
                     */
                    bool FailedNumHasBeenSet() const;

                    /**
                     * 获取<p>Failure detail</p>
                     * @return FailedList <p>Failure detail</p>
                     * 
                     */
                    std::vector<LicenseUnbindFailedItem> GetFailedList() const;

                    /**
                     * 判断参数 FailedList 是否已赋值
                     * @return FailedList 是否已赋值
                     * 
                     */
                    bool FailedListHasBeenSet() const;

                private:

                    /**
                     * <p>Total.</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>Number of successes</p>
                     */
                    int64_t m_successNum;
                    bool m_successNumHasBeenSet;

                    /**
                     * <p>failure count</p>
                     */
                    int64_t m_failedNum;
                    bool m_failedNumHasBeenSet;

                    /**
                     * <p>Failure detail</p>
                     */
                    std::vector<LicenseUnbindFailedItem> m_failedList;
                    bool m_failedListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPRASPLICENSEUNBINDSRESPONSE_H_
