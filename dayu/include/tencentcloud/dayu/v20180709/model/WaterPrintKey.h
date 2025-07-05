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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTKEY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Watermark key
                */
                class WaterPrintKey : public AbstractModel
                {
                public:
                    WaterPrintKey();
                    ~WaterPrintKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Watermark key ID
                     * @return KeyId Watermark key ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Watermark key ID
                     * @param _keyId Watermark key ID
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
                     * 获取Watermark key value
                     * @return KeyContent Watermark key value
                     * 
                     */
                    std::string GetKeyContent() const;

                    /**
                     * 设置Watermark key value
                     * @param _keyContent Watermark key value
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
                     * 获取Watermark key version number
                     * @return KeyVersion Watermark key version number
                     * 
                     */
                    std::string GetKeyVersion() const;

                    /**
                     * 设置Watermark key version number
                     * @param _keyVersion Watermark key version number
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
                     * 获取Whether it is enabled. Valid values: [0 (no), 1 (yes)]
                     * @return OpenStatus Whether it is enabled. Valid values: [0 (no), 1 (yes)]
                     * 
                     */
                    uint64_t GetOpenStatus() const;

                    /**
                     * 设置Whether it is enabled. Valid values: [0 (no), 1 (yes)]
                     * @param _openStatus Whether it is enabled. Valid values: [0 (no), 1 (yes)]
                     * 
                     */
                    void SetOpenStatus(const uint64_t& _openStatus);

                    /**
                     * 判断参数 OpenStatus 是否已赋值
                     * @return OpenStatus 是否已赋值
                     * 
                     */
                    bool OpenStatusHasBeenSet() const;

                    /**
                     * 获取Key generation time
                     * @return CreateTime Key generation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Key generation time
                     * @param _createTime Key generation time
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
                     * Watermark key ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Watermark key value
                     */
                    std::string m_keyContent;
                    bool m_keyContentHasBeenSet;

                    /**
                     * Watermark key version number
                     */
                    std::string m_keyVersion;
                    bool m_keyVersionHasBeenSet;

                    /**
                     * Whether it is enabled. Valid values: [0 (no), 1 (yes)]
                     */
                    uint64_t m_openStatus;
                    bool m_openStatusHasBeenSet;

                    /**
                     * Key generation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTKEY_H_
