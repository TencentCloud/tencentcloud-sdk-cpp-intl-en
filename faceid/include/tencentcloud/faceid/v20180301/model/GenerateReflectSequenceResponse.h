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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GENERATEREFLECTSEQUENCERESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GENERATEREFLECTSEQUENCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GenerateReflectSequence response structure.
                */
                class GenerateReflectSequenceResponse : public AbstractModel
                {
                public:
                    GenerateReflectSequenceResponse();
                    ~GenerateReflectSequenceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The resource URL of the light sequence, which needs to be downloaded and passed through to the SDK to start the identity verification process.
                     * @return ReflectSequenceUrl The resource URL of the light sequence, which needs to be downloaded and passed through to the SDK to start the identity verification process.
                     * 
                     */
                    std::string GetReflectSequenceUrl() const;

                    /**
                     * 判断参数 ReflectSequenceUrl 是否已赋值
                     * @return ReflectSequenceUrl 是否已赋值
                     * 
                     */
                    bool ReflectSequenceUrlHasBeenSet() const;

                    /**
                     * 获取The MD5 hash value of the light sequence, which is used to check whether the light sequence is altered.
                     * @return ReflectSequenceMd5 The MD5 hash value of the light sequence, which is used to check whether the light sequence is altered.
                     * 
                     */
                    std::string GetReflectSequenceMd5() const;

                    /**
                     * 判断参数 ReflectSequenceMd5 是否已赋值
                     * @return ReflectSequenceMd5 是否已赋值
                     * 
                     */
                    bool ReflectSequenceMd5HasBeenSet() const;

                private:

                    /**
                     * The resource URL of the light sequence, which needs to be downloaded and passed through to the SDK to start the identity verification process.
                     */
                    std::string m_reflectSequenceUrl;
                    bool m_reflectSequenceUrlHasBeenSet;

                    /**
                     * The MD5 hash value of the light sequence, which is used to check whether the light sequence is altered.
                     */
                    std::string m_reflectSequenceMd5;
                    bool m_reflectSequenceMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GENERATEREFLECTSEQUENCERESPONSE_H_
