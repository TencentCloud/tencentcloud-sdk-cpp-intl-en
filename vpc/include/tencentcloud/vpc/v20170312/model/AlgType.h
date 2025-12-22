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
                     * 获取Ftp protocol Alg functionality whether enabled, available values:.
<li>true: enable Ftp protocol Alg functionality.</li>.
<li>false: disable Ftp protocol Alg functionality.</li>.
                     * @return Ftp Ftp protocol Alg functionality whether enabled, available values:.
<li>true: enable Ftp protocol Alg functionality.</li>.
<li>false: disable Ftp protocol Alg functionality.</li>.
                     * 
                     */
                    bool GetFtp() const;

                    /**
                     * 设置Ftp protocol Alg functionality whether enabled, available values:.
<li>true: enable Ftp protocol Alg functionality.</li>.
<li>false: disable Ftp protocol Alg functionality.</li>.
                     * @param _ftp Ftp protocol Alg functionality whether enabled, available values:.
<li>true: enable Ftp protocol Alg functionality.</li>.
<li>false: disable Ftp protocol Alg functionality.</li>.
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
                     * 获取Whether the Sip protocol Alg function is enabled. available values:.
<li>true: enable Sip protocol Alg function.</li>.
<li>false: disable Sip protocol Alg function.</li>.
                     * @return Sip Whether the Sip protocol Alg function is enabled. available values:.
<li>true: enable Sip protocol Alg function.</li>.
<li>false: disable Sip protocol Alg function.</li>.
                     * 
                     */
                    bool GetSip() const;

                    /**
                     * 设置Whether the Sip protocol Alg function is enabled. available values:.
<li>true: enable Sip protocol Alg function.</li>.
<li>false: disable Sip protocol Alg function.</li>.
                     * @param _sip Whether the Sip protocol Alg function is enabled. available values:.
<li>true: enable Sip protocol Alg function.</li>.
<li>false: disable Sip protocol Alg function.</li>.
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
                     * Ftp protocol Alg functionality whether enabled, available values:.
<li>true: enable Ftp protocol Alg functionality.</li>.
<li>false: disable Ftp protocol Alg functionality.</li>.
                     */
                    bool m_ftp;
                    bool m_ftpHasBeenSet;

                    /**
                     * Whether the Sip protocol Alg function is enabled. available values:.
<li>true: enable Sip protocol Alg function.</li>.
<li>false: disable Sip protocol Alg function.</li>.
                     */
                    bool m_sip;
                    bool m_sipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ALGTYPE_H_
