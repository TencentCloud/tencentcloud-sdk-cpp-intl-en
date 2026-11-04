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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPTRIGGERSUMMARYLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPTRIGGERSUMMARYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerSummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAppTriggerSummaryList response structure.
                */
                class DescribeAppTriggerSummaryListResponse : public AbstractModel
                {
                public:
                    DescribeAppTriggerSummaryListResponse();
                    ~DescribeAppTriggerSummaryListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Number of application triggers</p>
                     * @return TotalCount <p>Number of application triggers</p>
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Application trigger list</p>
                     * @return TriggerList <p>Application trigger list</p>
                     * 
                     */
                    std::vector<AppTriggerSummary> GetTriggerList() const;

                    /**
                     * 判断参数 TriggerList 是否已赋值
                     * @return TriggerList 是否已赋值
                     * 
                     */
                    bool TriggerListHasBeenSet() const;

                private:

                    /**
                     * <p>Number of application triggers</p>
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Application trigger list</p>
                     */
                    std::vector<AppTriggerSummary> m_triggerList;
                    bool m_triggerListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAPPTRIGGERSUMMARYLISTRESPONSE_H_
