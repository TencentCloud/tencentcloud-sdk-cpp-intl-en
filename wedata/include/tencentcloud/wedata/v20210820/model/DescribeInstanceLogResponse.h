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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationInstanceLog.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeInstanceLog response structure.
                */
                class DescribeInstanceLogResponse : public AbstractModel
                {
                public:
                    DescribeInstanceLogResponse();
                    ~DescribeInstanceLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Returned result
                     * @return Data Returned result
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
                     * 获取Return results
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceLogInfo Return results
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    IntegrationInstanceLog GetInstanceLogInfo() const;

                    /**
                     * 判断参数 InstanceLogInfo 是否已赋值
                     * @return InstanceLogInfo 是否已赋值
                     * 
                     */
                    bool InstanceLogInfoHasBeenSet() const;

                private:

                    /**
                     * Returned result
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Return results
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    IntegrationInstanceLog m_instanceLogInfo;
                    bool m_instanceLogInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGRESPONSE_H_
