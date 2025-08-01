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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEDATAKEYRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEDATAKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/DataKeyMetadata.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * DescribeDataKey response structure.
                */
                class DescribeDataKeyResponse : public AbstractModel
                {
                public:
                    DescribeDataKeyResponse();
                    ~DescribeDataKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the data key attribute information.
                     * @return DataKeyMetadata Specifies the data key attribute information.
                     * 
                     */
                    DataKeyMetadata GetDataKeyMetadata() const;

                    /**
                     * 判断参数 DataKeyMetadata 是否已赋值
                     * @return DataKeyMetadata 是否已赋值
                     * 
                     */
                    bool DataKeyMetadataHasBeenSet() const;

                private:

                    /**
                     * Specifies the data key attribute information.
                     */
                    DataKeyMetadata m_dataKeyMetadata;
                    bool m_dataKeyMetadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEDATAKEYRESPONSE_H_
