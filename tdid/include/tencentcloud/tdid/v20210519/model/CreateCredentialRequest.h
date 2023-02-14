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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATECREDENTIALREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATECREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/FunctionArg.h>
#include <tencentcloud/tdid/v20210519/model/TransactionArg.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * CreateCredential request structure.
                */
                class CreateCredentialRequest : public AbstractModel
                {
                public:
                    CreateCredentialRequest();
                    ~CreateCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取A parameter set. For details, see the example.
                     * @return FunctionArg A parameter set. For details, see the example.
                     */
                    FunctionArg GetFunctionArg() const;

                    /**
                     * 设置A parameter set. For details, see the example.
                     * @param FunctionArg A parameter set. For details, see the example.
                     */
                    void SetFunctionArg(const FunctionArg& _functionArg);

                    /**
                     * 判断参数 FunctionArg 是否已赋值
                     * @return FunctionArg 是否已赋值
                     */
                    bool FunctionArgHasBeenSet() const;

                    /**
                     * 获取A parameter set. For details, see the example.
                     * @return TransactionArg A parameter set. For details, see the example.
                     */
                    TransactionArg GetTransactionArg() const;

                    /**
                     * 设置A parameter set. For details, see the example.
                     * @param TransactionArg A parameter set. For details, see the example.
                     */
                    void SetTransactionArg(const TransactionArg& _transactionArg);

                    /**
                     * 判断参数 TransactionArg 是否已赋值
                     * @return TransactionArg 是否已赋值
                     */
                    bool TransactionArgHasBeenSet() const;

                    /**
                     * 获取The version.
                     * @return VersionCredential The version.
                     */
                    std::string GetVersionCredential() const;

                    /**
                     * 设置The version.
                     * @param VersionCredential The version.
                     */
                    void SetVersionCredential(const std::string& _versionCredential);

                    /**
                     * 判断参数 VersionCredential 是否已赋值
                     * @return VersionCredential 是否已赋值
                     */
                    bool VersionCredentialHasBeenSet() const;

                    /**
                     * 获取Whether the credential is unsigned.
                     * @return UnSigned Whether the credential is unsigned.
                     */
                    bool GetUnSigned() const;

                    /**
                     * 设置Whether the credential is unsigned.
                     * @param UnSigned Whether the credential is unsigned.
                     */
                    void SetUnSigned(const bool& _unSigned);

                    /**
                     * 判断参数 UnSigned 是否已赋值
                     * @return UnSigned 是否已赋值
                     */
                    bool UnSignedHasBeenSet() const;

                private:

                    /**
                     * A parameter set. For details, see the example.
                     */
                    FunctionArg m_functionArg;
                    bool m_functionArgHasBeenSet;

                    /**
                     * A parameter set. For details, see the example.
                     */
                    TransactionArg m_transactionArg;
                    bool m_transactionArgHasBeenSet;

                    /**
                     * The version.
                     */
                    std::string m_versionCredential;
                    bool m_versionCredentialHasBeenSet;

                    /**
                     * Whether the credential is unsigned.
                     */
                    bool m_unSigned;
                    bool m_unSignedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATECREDENTIALREQUEST_H_
