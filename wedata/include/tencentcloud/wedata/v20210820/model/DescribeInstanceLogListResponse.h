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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGLISTRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLogList.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeInstanceLogList response structure.
                */
                class DescribeInstanceLogListResponse : public AbstractModel
                {
                public:
                    DescribeInstanceLogListResponse();
                    ~DescribeInstanceLogListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Log list
                     * @return Data Log list
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Log listNote: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceLogList Log listNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<InstanceLogList> GetInstanceLogList() const;

                    /**
                     * 判断参数 InstanceLogList 是否已赋值
                     * @return InstanceLogList 是否已赋值
                     * 
                     */
                    bool InstanceLogListHasBeenSet() const;

                private:

                    /**
                     * Log list
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Log listNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<InstanceLogList> m_instanceLogList;
                    bool m_instanceLogListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGLISTRESPONSE_H_
