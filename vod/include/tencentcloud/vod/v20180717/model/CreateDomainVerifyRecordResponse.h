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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEDOMAINVERIFYRECORDRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEDOMAINVERIFYRECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DNSVerifyInfo.h>
#include <tencentcloud/vod/v20180717/model/FileVerifyInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateDomainVerifyRecord response structure.
                */
                class CreateDomainVerifyRecordResponse : public AbstractModel
                {
                public:
                    CreateDomainVerifyRecordResponse();
                    ~CreateDomainVerifyRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DNS Verify Information
                     * @return DNSVerifyInfo DNS Verify Information
                     * 
                     */
                    DNSVerifyInfo GetDNSVerifyInfo() const;

                    /**
                     * 判断参数 DNSVerifyInfo 是否已赋值
                     * @return DNSVerifyInfo 是否已赋值
                     * 
                     */
                    bool DNSVerifyInfoHasBeenSet() const;

                    /**
                     * 获取File Verify Information
                     * @return FileVerifyInfo File Verify Information
                     * 
                     */
                    FileVerifyInfo GetFileVerifyInfo() const;

                    /**
                     * 判断参数 FileVerifyInfo 是否已赋值
                     * @return FileVerifyInfo 是否已赋值
                     * 
                     */
                    bool FileVerifyInfoHasBeenSet() const;

                private:

                    /**
                     * DNS Verify Information
                     */
                    DNSVerifyInfo m_dNSVerifyInfo;
                    bool m_dNSVerifyInfoHasBeenSet;

                    /**
                     * File Verify Information
                     */
                    FileVerifyInfo m_fileVerifyInfo;
                    bool m_fileVerifyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEDOMAINVERIFYRECORDRESPONSE_H_
