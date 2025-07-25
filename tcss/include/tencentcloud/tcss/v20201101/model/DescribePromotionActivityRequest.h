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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPROMOTIONACTIVITYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPROMOTIONACTIVITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribePromotionActivity request structure.
                */
                class DescribePromotionActivityRequest : public AbstractModel
                {
                public:
                    DescribePromotionActivityRequest();
                    ~DescribePromotionActivityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Promotion ID
                     * @return ActiveID Promotion ID
                     * 
                     */
                    uint64_t GetActiveID() const;

                    /**
                     * 设置Promotion ID
                     * @param _activeID Promotion ID
                     * 
                     */
                    void SetActiveID(const uint64_t& _activeID);

                    /**
                     * 判断参数 ActiveID 是否已赋值
                     * @return ActiveID 是否已赋值
                     * 
                     */
                    bool ActiveIDHasBeenSet() const;

                private:

                    /**
                     * Promotion ID
                     */
                    uint64_t m_activeID;
                    bool m_activeIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPROMOTIONACTIVITYREQUEST_H_
