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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERKEYINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Details of the asset management account key
                */
                class AssetUserKeyInfo : public AbstractModel
                {
                public:
                    AssetUserKeyInfo();
                    ~AssetUserKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Public key value
                     * @return Value Public key value
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Public key value
                     * @param _value Public key value
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Public key remarks
                     * @return Comment Public key remarks
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Public key remarks
                     * @param _comment Public key remarks
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Encryption method
                     * @return EncryptType Encryption method
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置Encryption method
                     * @param _encryptType Encryption method
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                private:

                    /**
                     * Public key value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Public key remarks
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Encryption method
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERKEYINFO_H_
