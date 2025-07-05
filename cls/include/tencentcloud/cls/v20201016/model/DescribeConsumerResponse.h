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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConsumerContent.h>
#include <tencentcloud/cls/v20201016/model/Ckafka.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeConsumer response structure.
                */
                class DescribeConsumerResponse : public AbstractModel
                {
                public:
                    DescribeConsumerResponse();
                    ~DescribeConsumerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the shipping task is effective
                     * @return Effective Whether the shipping task is effective
                     * 
                     */
                    bool GetEffective() const;

                    /**
                     * 判断参数 Effective 是否已赋值
                     * @return Effective 是否已赋值
                     * 
                     */
                    bool EffectiveHasBeenSet() const;

                    /**
                     * 获取Whether log metadata is shipped
                     * @return NeedContent Whether log metadata is shipped
                     * 
                     */
                    bool GetNeedContent() const;

                    /**
                     * 判断参数 NeedContent 是否已赋值
                     * @return NeedContent 是否已赋值
                     * 
                     */
                    bool NeedContentHasBeenSet() const;

                    /**
                     * 获取Metadata shipped if `NeedContent` is `true`
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Content Metadata shipped if `NeedContent` is `true`
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    ConsumerContent GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取CKafka information
                     * @return Ckafka CKafka information
                     * 
                     */
                    Ckafka GetCkafka() const;

                    /**
                     * 判断参数 Ckafka 是否已赋值
                     * @return Ckafka 是否已赋值
                     * 
                     */
                    bool CkafkaHasBeenSet() const;

                    /**
                     * 获取Compression mode. Valid values: `0` (no compression), `2` (snappy), `3` (LZ4).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Compression Compression mode. Valid values: `0` (no compression), `2` (snappy), `3` (LZ4).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                private:

                    /**
                     * Whether the shipping task is effective
                     */
                    bool m_effective;
                    bool m_effectiveHasBeenSet;

                    /**
                     * Whether log metadata is shipped
                     */
                    bool m_needContent;
                    bool m_needContentHasBeenSet;

                    /**
                     * Metadata shipped if `NeedContent` is `true`
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    ConsumerContent m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * CKafka information
                     */
                    Ckafka m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * Compression mode. Valid values: `0` (no compression), `2` (snappy), `3` (LZ4).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERRESPONSE_H_
