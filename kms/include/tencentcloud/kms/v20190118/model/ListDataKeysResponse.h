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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYSRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/DataKey.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ListDataKeys response structure.
                */
                class ListDataKeysResponse : public AbstractModel
                {
                public:
                    ListDataKeysResponse();
                    ~ListDataKeysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the list array of data key ids.
                     * @return DataKeys Specifies the list array of data key ids.
                     * 
                     */
                    std::vector<DataKey> GetDataKeys() const;

                    /**
                     * 判断参数 DataKeys 是否已赋值
                     * @return DataKeys 是否已赋值
                     * 
                     */
                    bool DataKeysHasBeenSet() const;

                    /**
                     * 获取Total number of data keys.
                     * @return TotalCount Total number of data keys.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Specifies the list array of data key ids.
                     */
                    std::vector<DataKey> m_dataKeys;
                    bool m_dataKeysHasBeenSet;

                    /**
                     * Total number of data keys.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYSRESPONSE_H_
