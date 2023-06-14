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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESNAPSHOTBYTIMEOFFSETTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESNAPSHOTBYTIMEOFFSETTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SnapshotByTimeOffsetTemplate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeSnapshotByTimeOffsetTemplates response structure.
                */
                class DescribeSnapshotByTimeOffsetTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeSnapshotByTimeOffsetTemplatesResponse();
                    ~DescribeSnapshotByTimeOffsetTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of eligible entries.
                     * @return TotalCount Number of eligible entries.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of time point screencapturing template details.
                     * @return SnapshotByTimeOffsetTemplateSet List of time point screencapturing template details.
                     * 
                     */
                    std::vector<SnapshotByTimeOffsetTemplate> GetSnapshotByTimeOffsetTemplateSet() const;

                    /**
                     * 判断参数 SnapshotByTimeOffsetTemplateSet 是否已赋值
                     * @return SnapshotByTimeOffsetTemplateSet 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetTemplateSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible entries.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of time point screencapturing template details.
                     */
                    std::vector<SnapshotByTimeOffsetTemplate> m_snapshotByTimeOffsetTemplateSet;
                    bool m_snapshotByTimeOffsetTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESNAPSHOTBYTIMEOFFSETTEMPLATESRESPONSE_H_
