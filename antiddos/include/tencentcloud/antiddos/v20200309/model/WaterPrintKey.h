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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTKEY_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Created watermark key
                */
                class WaterPrintKey : public AbstractModel
                {
                public:
                    WaterPrintKey();
                    ~WaterPrintKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key version
                     * @return KeyVersion Key version
                     * 
                     */
                    std::string GetKeyVersion() const;

                    /**
                     * 设置Key version
                     * @param _keyVersion Key version
                     * 
                     */
                    void SetKeyVersion(const std::string& _keyVersion);

                    /**
                     * 判断参数 KeyVersion 是否已赋值
                     * @return KeyVersion 是否已赋值
                     * 
                     */
                    bool KeyVersionHasBeenSet() const;

                    /**
                     * 获取Key content
                     * @return KeyContent Key content
                     * 
                     */
                    std::string GetKeyContent() const;

                    /**
                     * 设置Key content
                     * @param _keyContent Key content
                     * 
                     */
                    void SetKeyContent(const std::string& _keyContent);

                    /**
                     * 判断参数 KeyContent 是否已赋值
                     * @return KeyContent 是否已赋值
                     * 
                     */
                    bool KeyContentHasBeenSet() const;

                    /**
                     * 获取Key ID
                     * @return KeyId Key ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Key ID
                     * @param _keyId Key ID
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Key status. Valid value: `1` (enabled).
                     * @return KeyOpenStatus Key status. Valid value: `1` (enabled).
                     * 
                     */
                    int64_t GetKeyOpenStatus() const;

                    /**
                     * 设置Key status. Valid value: `1` (enabled).
                     * @param _keyOpenStatus Key status. Valid value: `1` (enabled).
                     * 
                     */
                    void SetKeyOpenStatus(const int64_t& _keyOpenStatus);

                    /**
                     * 判断参数 KeyOpenStatus 是否已赋值
                     * @return KeyOpenStatus 是否已赋值
                     * 
                     */
                    bool KeyOpenStatusHasBeenSet() const;

                    /**
                     * 获取Key creation time
                     * @return CreateTime Key creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Key creation time
                     * @param _createTime Key creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Key version
                     */
                    std::string m_keyVersion;
                    bool m_keyVersionHasBeenSet;

                    /**
                     * Key content
                     */
                    std::string m_keyContent;
                    bool m_keyContentHasBeenSet;

                    /**
                     * Key ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Key status. Valid value: `1` (enabled).
                     */
                    int64_t m_keyOpenStatus;
                    bool m_keyOpenStatusHasBeenSet;

                    /**
                     * Key creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTKEY_H_
