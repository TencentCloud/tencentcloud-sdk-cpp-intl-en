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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLINELISTRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLINELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/LineInfo.h>
#include <tencentcloud/dnspod/v20210323/model/LineGroupInfo.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeRecordLineList response structure.
                */
                class DescribeRecordLineListResponse : public AbstractModel
                {
                public:
                    DescribeRecordLineListResponse();
                    ~DescribeRecordLineListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of split zones.
                     * @return LineList List of split zones.
                     */
                    std::vector<LineInfo> GetLineList() const;

                    /**
                     * 判断参数 LineList 是否已赋值
                     * @return LineList 是否已赋值
                     */
                    bool LineListHasBeenSet() const;

                    /**
                     * 获取List of split zone groups.
                     * @return LineGroupList List of split zone groups.
                     */
                    std::vector<LineGroupInfo> GetLineGroupList() const;

                    /**
                     * 判断参数 LineGroupList 是否已赋值
                     * @return LineGroupList 是否已赋值
                     */
                    bool LineGroupListHasBeenSet() const;

                private:

                    /**
                     * List of split zones.
                     */
                    std::vector<LineInfo> m_lineList;
                    bool m_lineListHasBeenSet;

                    /**
                     * List of split zone groups.
                     */
                    std::vector<LineGroupInfo> m_lineGroupList;
                    bool m_lineGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLINELISTRESPONSE_H_
