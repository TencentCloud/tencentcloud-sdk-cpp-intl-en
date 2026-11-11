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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITELEARNLISTEDRRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITELEARNLISTEDRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LoginWhiteItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeLoginWhiteLearnListEDR response structure.
                */
                class DescribeLoginWhiteLearnListEDRResponse : public AbstractModel
                {
                public:
                    DescribeLoginWhiteLearnListEDRResponse();
                    ~DescribeLoginWhiteLearnListEDRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Total number of rule groups (aggregated by AppId + common login location)</p>
                     * @return TotalCount <p>Total number of rule groups (aggregated by AppId + common login location)</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Self-learning allowlist rule group list (Type is always Learn). If empty, [] is returned.</p>
                     * @return List <p>Self-learning allowlist rule group list (Type is always Learn). If empty, [] is returned.</p>
                     * 
                     */
                    std::vector<LoginWhiteItem> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>Self-learning allowlist switch status; for multi-account, the current account is used to prompt the frontend to go to enable in the empty state</p>
                     * @return AutoLearnEnable <p>Self-learning allowlist switch status; for multi-account, the current account is used to prompt the frontend to go to enable in the empty state</p>
                     * 
                     */
                    bool GetAutoLearnEnable() const;

                    /**
                     * 判断参数 AutoLearnEnable 是否已赋值
                     * @return AutoLearnEnable 是否已赋值
                     * 
                     */
                    bool AutoLearnEnableHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of rule groups (aggregated by AppId + common login location)</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Self-learning allowlist rule group list (Type is always Learn). If empty, [] is returned.</p>
                     */
                    std::vector<LoginWhiteItem> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>Self-learning allowlist switch status; for multi-account, the current account is used to prompt the frontend to go to enable in the empty state</p>
                     */
                    bool m_autoLearnEnable;
                    bool m_autoLearnEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITELEARNLISTEDRRESPONSE_H_
