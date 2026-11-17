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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTK8SAPI_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTK8SAPI_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 
                */
                class RuleContentK8sAPI : public AbstractModel
                {
                public:
                    RuleContentK8sAPI();
                    ~RuleContentK8sAPI() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return RequestURI 
                     * 
                     */
                    std::string GetRequestURI() const;

                    /**
                     * 设置
                     * @param _requestURI 
                     * 
                     */
                    void SetRequestURI(const std::string& _requestURI);

                    /**
                     * 判断参数 RequestURI 是否已赋值
                     * @return RequestURI 是否已赋值
                     * 
                     */
                    bool RequestURIHasBeenSet() const;

                    /**
                     * 获取
                     * @return Verb 
                     * 
                     */
                    std::string GetVerb() const;

                    /**
                     * 设置
                     * @param _verb 
                     * 
                     */
                    void SetVerb(const std::string& _verb);

                    /**
                     * 判断参数 Verb 是否已赋值
                     * @return Verb 是否已赋值
                     * 
                     */
                    bool VerbHasBeenSet() const;

                    /**
                     * 获取
                     * @return RequestUser 
                     * 
                     */
                    std::string GetRequestUser() const;

                    /**
                     * 设置
                     * @param _requestUser 
                     * 
                     */
                    void SetRequestUser(const std::string& _requestUser);

                    /**
                     * 判断参数 RequestUser 是否已赋值
                     * @return RequestUser 是否已赋值
                     * 
                     */
                    bool RequestUserHasBeenSet() const;

                    /**
                     * 获取
                     * @return UserAgent 
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置
                     * @param _userAgent 
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取
                     * @return SourceIPS 
                     * 
                     */
                    std::string GetSourceIPS() const;

                    /**
                     * 设置
                     * @param _sourceIPS 
                     * 
                     */
                    void SetSourceIPS(const std::string& _sourceIPS);

                    /**
                     * 判断参数 SourceIPS 是否已赋值
                     * @return SourceIPS 是否已赋值
                     * 
                     */
                    bool SourceIPSHasBeenSet() const;

                    /**
                     * 获取
                     * @return ResponseStatusCode 
                     * 
                     */
                    std::string GetResponseStatusCode() const;

                    /**
                     * 设置
                     * @param _responseStatusCode 
                     * 
                     */
                    void SetResponseStatusCode(const std::string& _responseStatusCode);

                    /**
                     * 判断参数 ResponseStatusCode 是否已赋值
                     * @return ResponseStatusCode 是否已赋值
                     * 
                     */
                    bool ResponseStatusCodeHasBeenSet() const;

                    /**
                     * 获取
                     * @return RequestObject 
                     * 
                     */
                    std::string GetRequestObject() const;

                    /**
                     * 设置
                     * @param _requestObject 
                     * 
                     */
                    void SetRequestObject(const std::string& _requestObject);

                    /**
                     * 判断参数 RequestObject 是否已赋值
                     * @return RequestObject 是否已赋值
                     * 
                     */
                    bool RequestObjectHasBeenSet() const;

                    /**
                     * 获取
                     * @return ResponseObject 
                     * 
                     */
                    std::string GetResponseObject() const;

                    /**
                     * 设置
                     * @param _responseObject 
                     * 
                     */
                    void SetResponseObject(const std::string& _responseObject);

                    /**
                     * 判断参数 ResponseObject 是否已赋值
                     * @return ResponseObject 是否已赋值
                     * 
                     */
                    bool ResponseObjectHasBeenSet() const;

                    /**
                     * 获取
                     * @return MountHostDir 
                     * 
                     */
                    std::string GetMountHostDir() const;

                    /**
                     * 设置
                     * @param _mountHostDir 
                     * 
                     */
                    void SetMountHostDir(const std::string& _mountHostDir);

                    /**
                     * 判断参数 MountHostDir 是否已赋值
                     * @return MountHostDir 是否已赋值
                     * 
                     */
                    bool MountHostDirHasBeenSet() const;

                    /**
                     * 获取
                     * @return PodNameIP 
                     * 
                     */
                    std::string GetPodNameIP() const;

                    /**
                     * 设置
                     * @param _podNameIP 
                     * 
                     */
                    void SetPodNameIP(const std::string& _podNameIP);

                    /**
                     * 判断参数 PodNameIP 是否已赋值
                     * @return PodNameIP 是否已赋值
                     * 
                     */
                    bool PodNameIPHasBeenSet() const;

                    /**
                     * 获取
                     * @return AuditID 
                     * 
                     */
                    std::string GetAuditID() const;

                    /**
                     * 设置
                     * @param _auditID 
                     * 
                     */
                    void SetAuditID(const std::string& _auditID);

                    /**
                     * 判断参数 AuditID 是否已赋值
                     * @return AuditID 是否已赋值
                     * 
                     */
                    bool AuditIDHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_requestURI;
                    bool m_requestURIHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_verb;
                    bool m_verbHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_requestUser;
                    bool m_requestUserHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sourceIPS;
                    bool m_sourceIPSHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_responseStatusCode;
                    bool m_responseStatusCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_requestObject;
                    bool m_requestObjectHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_responseObject;
                    bool m_responseObjectHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_mountHostDir;
                    bool m_mountHostDirHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_podNameIP;
                    bool m_podNameIPHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_auditID;
                    bool m_auditIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTK8SAPI_H_
