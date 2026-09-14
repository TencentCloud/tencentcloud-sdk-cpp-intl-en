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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AWSSQS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AWSSQS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Aws SQS queue information
                */
                class AwsSQS : public AbstractModel
                {
                public:
                    AwsSQS();
                    ~AwsSQS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SQSRegion 
                     * 
                     */
                    std::string GetSQSRegion() const;

                    /**
                     * 设置
                     * @param _sQSRegion 
                     * 
                     */
                    void SetSQSRegion(const std::string& _sQSRegion);

                    /**
                     * 判断参数 SQSRegion 是否已赋值
                     * @return SQSRegion 是否已赋值
                     * 
                     */
                    bool SQSRegionHasBeenSet() const;

                    /**
                     * 获取
                     * @return SQSQueueName 
                     * 
                     */
                    std::string GetSQSQueueName() const;

                    /**
                     * 设置
                     * @param _sQSQueueName 
                     * 
                     */
                    void SetSQSQueueName(const std::string& _sQSQueueName);

                    /**
                     * 判断参数 SQSQueueName 是否已赋值
                     * @return SQSQueueName 是否已赋值
                     * 
                     */
                    bool SQSQueueNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return S3SecretId 
                     * 
                     */
                    std::string GetS3SecretId() const;

                    /**
                     * 设置
                     * @param _s3SecretId 
                     * 
                     */
                    void SetS3SecretId(const std::string& _s3SecretId);

                    /**
                     * 判断参数 S3SecretId 是否已赋值
                     * @return S3SecretId 是否已赋值
                     * 
                     */
                    bool S3SecretIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return S3SecretKey 
                     * 
                     */
                    std::string GetS3SecretKey() const;

                    /**
                     * 设置
                     * @param _s3SecretKey 
                     * 
                     */
                    void SetS3SecretKey(const std::string& _s3SecretKey);

                    /**
                     * 判断参数 S3SecretKey 是否已赋值
                     * @return S3SecretKey 是否已赋值
                     * 
                     */
                    bool S3SecretKeyHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_sQSRegion;
                    bool m_sQSRegionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sQSQueueName;
                    bool m_sQSQueueNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_s3SecretId;
                    bool m_s3SecretIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_s3SecretKey;
                    bool m_s3SecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AWSSQS_H_
