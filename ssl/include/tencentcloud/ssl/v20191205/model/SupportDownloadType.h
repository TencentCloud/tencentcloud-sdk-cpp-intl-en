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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_SUPPORTDOWNLOADTYPE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_SUPPORTDOWNLOADTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Supported types for download.
                */
                class SupportDownloadType : public AbstractModel
                {
                public:
                    SupportDownloadType();
                    ~SupportDownloadType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the available format of nginx can be downloaded.
                     * @return NGINX Whether the available format of nginx can be downloaded.
                     * 
                     */
                    bool GetNGINX() const;

                    /**
                     * 设置Whether the available format of nginx can be downloaded.
                     * @param _nGINX Whether the available format of nginx can be downloaded.
                     * 
                     */
                    void SetNGINX(const bool& _nGINX);

                    /**
                     * 判断参数 NGINX 是否已赋值
                     * @return NGINX 是否已赋值
                     * 
                     */
                    bool NGINXHasBeenSet() const;

                    /**
                     * 获取Whether the available format of apache can be downloaded.
                     * @return APACHE Whether the available format of apache can be downloaded.
                     * 
                     */
                    bool GetAPACHE() const;

                    /**
                     * 设置Whether the available format of apache can be downloaded.
                     * @param _aPACHE Whether the available format of apache can be downloaded.
                     * 
                     */
                    void SetAPACHE(const bool& _aPACHE);

                    /**
                     * 判断参数 APACHE 是否已赋值
                     * @return APACHE 是否已赋值
                     * 
                     */
                    bool APACHEHasBeenSet() const;

                    /**
                     * 获取Whether the available format of tomcat can be downloaded.
                     * @return TOMCAT Whether the available format of tomcat can be downloaded.
                     * 
                     */
                    bool GetTOMCAT() const;

                    /**
                     * 设置Whether the available format of tomcat can be downloaded.
                     * @param _tOMCAT Whether the available format of tomcat can be downloaded.
                     * 
                     */
                    void SetTOMCAT(const bool& _tOMCAT);

                    /**
                     * 判断参数 TOMCAT 是否已赋值
                     * @return TOMCAT 是否已赋值
                     * 
                     */
                    bool TOMCATHasBeenSet() const;

                    /**
                     * 获取Whether the available format of iis can be downloaded.
                     * @return IIS Whether the available format of iis can be downloaded.
                     * 
                     */
                    bool GetIIS() const;

                    /**
                     * 设置Whether the available format of iis can be downloaded.
                     * @param _iIS Whether the available format of iis can be downloaded.
                     * 
                     */
                    void SetIIS(const bool& _iIS);

                    /**
                     * 判断参数 IIS 是否已赋值
                     * @return IIS 是否已赋值
                     * 
                     */
                    bool IISHasBeenSet() const;

                    /**
                     * 获取Indicates whether the jks format can be downloaded.
                     * @return JKS Indicates whether the jks format can be downloaded.
                     * 
                     */
                    bool GetJKS() const;

                    /**
                     * 设置Indicates whether the jks format can be downloaded.
                     * @param _jKS Indicates whether the jks format can be downloaded.
                     * 
                     */
                    void SetJKS(const bool& _jKS);

                    /**
                     * 判断参数 JKS 是否已赋值
                     * @return JKS 是否已赋值
                     * 
                     */
                    bool JKSHasBeenSet() const;

                    /**
                     * 获取Indicates whether other formats can be downloaded.
                     * @return OTHER Indicates whether other formats can be downloaded.
                     * 
                     */
                    bool GetOTHER() const;

                    /**
                     * 设置Indicates whether other formats can be downloaded.
                     * @param _oTHER Indicates whether other formats can be downloaded.
                     * 
                     */
                    void SetOTHER(const bool& _oTHER);

                    /**
                     * 判断参数 OTHER 是否已赋值
                     * @return OTHER 是否已赋值
                     * 
                     */
                    bool OTHERHasBeenSet() const;

                    /**
                     * 获取Indicates whether the root certificate can be downloaded.
                     * @return ROOT Indicates whether the root certificate can be downloaded.
                     * 
                     */
                    bool GetROOT() const;

                    /**
                     * 设置Indicates whether the root certificate can be downloaded.
                     * @param _rOOT Indicates whether the root certificate can be downloaded.
                     * 
                     */
                    void SetROOT(const bool& _rOOT);

                    /**
                     * 判断参数 ROOT 是否已赋值
                     * @return ROOT 是否已赋值
                     * 
                     */
                    bool ROOTHasBeenSet() const;

                private:

                    /**
                     * Whether the available format of nginx can be downloaded.
                     */
                    bool m_nGINX;
                    bool m_nGINXHasBeenSet;

                    /**
                     * Whether the available format of apache can be downloaded.
                     */
                    bool m_aPACHE;
                    bool m_aPACHEHasBeenSet;

                    /**
                     * Whether the available format of tomcat can be downloaded.
                     */
                    bool m_tOMCAT;
                    bool m_tOMCATHasBeenSet;

                    /**
                     * Whether the available format of iis can be downloaded.
                     */
                    bool m_iIS;
                    bool m_iISHasBeenSet;

                    /**
                     * Indicates whether the jks format can be downloaded.
                     */
                    bool m_jKS;
                    bool m_jKSHasBeenSet;

                    /**
                     * Indicates whether other formats can be downloaded.
                     */
                    bool m_oTHER;
                    bool m_oTHERHasBeenSet;

                    /**
                     * Indicates whether the root certificate can be downloaded.
                     */
                    bool m_rOOT;
                    bool m_rOOTHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_SUPPORTDOWNLOADTYPE_H_
