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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/UpdateRecordInfo.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostUpdateRecord response structure.
                */
                class DescribeHostUpdateRecordResponse : public AbstractModel
                {
                public:
                    DescribeHostUpdateRecordResponse();
                    ~DescribeHostUpdateRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Total count
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Certificate deployment record list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DeployRecordList Certificate deployment record list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<UpdateRecordInfo> GetDeployRecordList() const;

                    /**
                     * 判断参数 DeployRecordList 是否已赋值
                     * @return DeployRecordList 是否已赋值
                     * 
                     */
                    bool DeployRecordListHasBeenSet() const;

                private:

                    /**
                     * Total count
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Certificate deployment record list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<UpdateRecordInfo> m_deployRecordList;
                    bool m_deployRecordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDRESPONSE_H_
