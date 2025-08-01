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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEDATAKEYSREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEDATAKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * DescribeDataKeys request structure.
                */
                class DescribeDataKeysRequest : public AbstractModel
                {
                public:
                    DescribeDataKeysRequest();
                    ~DescribeDataKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the ID list of datakeys to query. supports up to 100 DataKey ids in a batch query.
                     * @return DataKeyIds Specifies the ID list of datakeys to query. supports up to 100 DataKey ids in a batch query.
                     * 
                     */
                    std::vector<std::string> GetDataKeyIds() const;

                    /**
                     * 设置Specifies the ID list of datakeys to query. supports up to 100 DataKey ids in a batch query.
                     * @param _dataKeyIds Specifies the ID list of datakeys to query. supports up to 100 DataKey ids in a batch query.
                     * 
                     */
                    void SetDataKeyIds(const std::vector<std::string>& _dataKeyIds);

                    /**
                     * 判断参数 DataKeyIds 是否已赋值
                     * @return DataKeyIds 是否已赋值
                     * 
                     */
                    bool DataKeyIdsHasBeenSet() const;

                private:

                    /**
                     * Specifies the ID list of datakeys to query. supports up to 100 DataKey ids in a batch query.
                     */
                    std::vector<std::string> m_dataKeyIds;
                    bool m_dataKeyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEDATAKEYSREQUEST_H_
