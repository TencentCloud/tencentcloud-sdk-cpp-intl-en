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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULEMERGENTMSGINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULEMERGENTMSGINFO_H_

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
                * Emergency notification entity
                */
                class VulEmergentMsgInfo : public AbstractModel
                {
                public:
                    VulEmergentMsgInfo();
                    ~VulEmergentMsgInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID
                     * @return VulId Vulnerability ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulId Vulnerability ID
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability disclosure time
                     * @return PublishTime Vulnerability disclosure time
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置Vulnerability disclosure time
                     * @param _publishTime Vulnerability disclosure time
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return Name Vulnerability name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _name Vulnerability name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Vulnerability name, English description
                     * @return NameEn Vulnerability name, English description
                     * 
                     */
                    std::string GetNameEn() const;

                    /**
                     * 设置Vulnerability name, English description
                     * @param _nameEn Vulnerability name, English description
                     * 
                     */
                    void SetNameEn(const std::string& _nameEn);

                    /**
                     * 判断参数 NameEn 是否已赋值
                     * @return NameEn 是否已赋值
                     * 
                     */
                    bool NameEnHasBeenSet() const;

                    /**
                     * 获取Is auto-repair supported 0: not supported >0: supported
                     * @return SupportFix Is auto-repair supported 0: not supported >0: supported
                     * 
                     */
                    int64_t GetSupportFix() const;

                    /**
                     * 设置Is auto-repair supported 0: not supported >0: supported
                     * @param _supportFix Is auto-repair supported 0: not supported >0: supported
                     * 
                     */
                    void SetSupportFix(const int64_t& _supportFix);

                    /**
                     * 判断参数 SupportFix 是否已赋值
                     * @return SupportFix 是否已赋值
                     * 
                     */
                    bool SupportFixHasBeenSet() const;

                    /**
                     * 获取Whether automatic defense is supported 0: no support 1: support
                     * @return SupportDefense Whether automatic defense is supported 0: no support 1: support
                     * 
                     */
                    int64_t GetSupportDefense() const;

                    /**
                     * 设置Whether automatic defense is supported 0: no support 1: support
                     * @param _supportDefense Whether automatic defense is supported 0: no support 1: support
                     * 
                     */
                    void SetSupportDefense(const int64_t& _supportDefense);

                    /**
                     * 判断参数 SupportDefense 是否已赋值
                     * @return SupportDefense 是否已赋值
                     * 
                     */
                    bool SupportDefenseHasBeenSet() const;

                    /**
                     * 获取KB ID
                     * @return KbId KB ID
                     * 
                     */
                    uint64_t GetKbId() const;

                    /**
                     * 设置KB ID
                     * @param _kbId KB ID
                     * 
                     */
                    void SetKbId(const uint64_t& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取KB number
                     * @return KbNumber KB number
                     * 
                     */
                    std::string GetKbNumber() const;

                    /**
                     * 设置KB number
                     * @param _kbNumber KB number
                     * 
                     */
                    void SetKbNumber(const std::string& _kbNumber);

                    /**
                     * 判断参数 KbNumber 是否已赋值
                     * @return KbNumber 是否已赋值
                     * 
                     */
                    bool KbNumberHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability disclosure time
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Vulnerability name, English description
                     */
                    std::string m_nameEn;
                    bool m_nameEnHasBeenSet;

                    /**
                     * Is auto-repair supported 0: not supported >0: supported
                     */
                    int64_t m_supportFix;
                    bool m_supportFixHasBeenSet;

                    /**
                     * Whether automatic defense is supported 0: no support 1: support
                     */
                    int64_t m_supportDefense;
                    bool m_supportDefenseHasBeenSet;

                    /**
                     * KB ID
                     */
                    uint64_t m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * KB number
                     */
                    std::string m_kbNumber;
                    bool m_kbNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULEMERGENTMSGINFO_H_
