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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ALGTYPE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ALGTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ALG protocol type
                */
                class AlgType : public AbstractModel
                {
                public:
                    AlgType();
                    ~AlgType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether FTP ALG is enabled
                     * @return Ftp Whether FTP ALG is enabled
                     * 
                     */
                    bool GetFtp() const;

                    /**
                     * 设置Whether FTP ALG is enabled
                     * @param _ftp Whether FTP ALG is enabled
                     * 
                     */
                    void SetFtp(const bool& _ftp);

                    /**
                     * 判断参数 Ftp 是否已赋值
                     * @return Ftp 是否已赋值
                     * 
                     */
                    bool FtpHasBeenSet() const;

                    /**
                     * 获取Whether SIP ALG is enabled
                     * @return Sip Whether SIP ALG is enabled
                     * 
                     */
                    bool GetSip() const;

                    /**
                     * 设置Whether SIP ALG is enabled
                     * @param _sip Whether SIP ALG is enabled
                     * 
                     */
                    void SetSip(const bool& _sip);

                    /**
                     * 判断参数 Sip 是否已赋值
                     * @return Sip 是否已赋值
                     * 
                     */
                    bool SipHasBeenSet() const;

                private:

                    /**
                     * Whether FTP ALG is enabled
                     */
                    bool m_ftp;
                    bool m_ftpHasBeenSet;

                    /**
                     * Whether SIP ALG is enabled
                     */
                    bool m_sip;
                    bool m_sipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ALGTYPE_H_
