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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_OWNERSHIPVERIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_OWNERSHIPVERIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DnsVerification.h>
#include <tencentcloud/teo/v20220901/model/FileVerification.h>
#include <tencentcloud/teo/v20220901/model/NsVerification.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 
                */
                class OwnershipVerification : public AbstractModel
                {
                public:
                    OwnershipVerification();
                    ~OwnershipVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return DnsVerification 
                     * 
                     */
                    DnsVerification GetDnsVerification() const;

                    /**
                     * 设置
                     * @param _dnsVerification 
                     * 
                     */
                    void SetDnsVerification(const DnsVerification& _dnsVerification);

                    /**
                     * 判断参数 DnsVerification 是否已赋值
                     * @return DnsVerification 是否已赋值
                     * 
                     */
                    bool DnsVerificationHasBeenSet() const;

                    /**
                     * 获取
                     * @return FileVerification 
                     * 
                     */
                    FileVerification GetFileVerification() const;

                    /**
                     * 设置
                     * @param _fileVerification 
                     * 
                     */
                    void SetFileVerification(const FileVerification& _fileVerification);

                    /**
                     * 判断参数 FileVerification 是否已赋值
                     * @return FileVerification 是否已赋值
                     * 
                     */
                    bool FileVerificationHasBeenSet() const;

                    /**
                     * 获取
                     * @return NsVerification 
                     * 
                     */
                    NsVerification GetNsVerification() const;

                    /**
                     * 设置
                     * @param _nsVerification 
                     * 
                     */
                    void SetNsVerification(const NsVerification& _nsVerification);

                    /**
                     * 判断参数 NsVerification 是否已赋值
                     * @return NsVerification 是否已赋值
                     * 
                     */
                    bool NsVerificationHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    DnsVerification m_dnsVerification;
                    bool m_dnsVerificationHasBeenSet;

                    /**
                     * 
                     */
                    FileVerification m_fileVerification;
                    bool m_fileVerificationHasBeenSet;

                    /**
                     * 
                     */
                    NsVerification m_nsVerification;
                    bool m_nsVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_OWNERSHIPVERIFICATION_H_
