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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/KeyMetadata.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ListKeyDetail response structure.
                */
                class ListKeyDetailResponse : public AbstractModel
                {
                public:
                    ListKeyDetailResponse();
                    ~ListKeyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of CMKs
                     * @return TotalCount Total number of CMKs
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
                     * 获取Specifies the returned attribute information list.
                     * @return KeyMetadatas Specifies the returned attribute information list.
                     * 
                     */
                    std::vector<KeyMetadata> GetKeyMetadatas() const;

                    /**
                     * 判断参数 KeyMetadatas 是否已赋值
                     * @return KeyMetadatas 是否已赋值
                     * 
                     */
                    bool KeyMetadatasHasBeenSet() const;

                private:

                    /**
                     * Total number of CMKs
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Specifies the returned attribute information list.
                     */
                    std::vector<KeyMetadata> m_keyMetadatas;
                    bool m_keyMetadatasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILRESPONSE_H_
