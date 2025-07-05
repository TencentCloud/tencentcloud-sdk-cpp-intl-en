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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTION_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 
                */
                class Encryption : public AbstractModel
                {
                public:
                    Encryption();
                    ~Encryption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return EncryptList 
                     * 
                     */
                    std::vector<std::string> GetEncryptList() const;

                    /**
                     * 设置
                     * @param _encryptList 
                     * 
                     */
                    void SetEncryptList(const std::vector<std::string>& _encryptList);

                    /**
                     * 判断参数 EncryptList 是否已赋值
                     * @return EncryptList 是否已赋值
                     * 
                     */
                    bool EncryptListHasBeenSet() const;

                    /**
                     * 获取
                     * @return CiphertextBlob 
                     * 
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 设置
                     * @param _ciphertextBlob 
                     * 
                     */
                    void SetCiphertextBlob(const std::string& _ciphertextBlob);

                    /**
                     * 判断参数 CiphertextBlob 是否已赋值
                     * @return CiphertextBlob 是否已赋值
                     * 
                     */
                    bool CiphertextBlobHasBeenSet() const;

                    /**
                     * 获取
                     * @return Iv 
                     * 
                     */
                    std::string GetIv() const;

                    /**
                     * 设置
                     * @param _iv 
                     * 
                     */
                    void SetIv(const std::string& _iv);

                    /**
                     * 判断参数 Iv 是否已赋值
                     * @return Iv 是否已赋值
                     * 
                     */
                    bool IvHasBeenSet() const;

                    /**
                     * 获取
                     * @return Algorithm 
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置
                     * @param _algorithm 
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取
                     * @return TagList 
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置
                     * @param _tagList 
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<std::string> m_encryptList;
                    bool m_encryptListHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_iv;
                    bool m_ivHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTION_H_
