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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DNSVERIFYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DNSVERIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DNS verification information
                */
                class DNSVerifyInfo : public AbstractModel
                {
                public:
                    DNSVerifyInfo();
                    ~DNSVerifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取sub-parsing.
                     * @return SubDomain sub-parsing.
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置sub-parsing.
                     * @param _subDomain sub-parsing.
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取parse value.
                     * @return Record parse value.
                     * 
                     */
                    std::string GetRecord() const;

                    /**
                     * 设置parse value.
                     * @param _record parse value.
                     * 
                     */
                    void SetRecord(const std::string& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取parsing type.
                     * @return RecordType parsing type.
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置parsing type.
                     * @param _recordType parsing type.
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                private:

                    /**
                     * sub-parsing.
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * parse value.
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * parsing type.
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DNSVERIFYINFO_H_
