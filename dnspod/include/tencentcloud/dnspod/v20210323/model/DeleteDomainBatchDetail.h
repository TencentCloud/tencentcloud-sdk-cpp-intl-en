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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETEDOMAINBATCHDETAIL_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETEDOMAINBATCHDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Details of batch deleting domains
                */
                class DeleteDomainBatchDetail : public AbstractModel
                {
                public:
                    DeleteDomainBatchDetail();
                    ~DeleteDomainBatchDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The domain ID.
                     * @return DomainId The domain ID.
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置The domain ID.
                     * @param _domainId The domain ID.
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取The domain name.
                     * @return Domain The domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain name.
                     * @param _domain The domain name.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Error The error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置The error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _error The error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取The domain deletion status.
                     * @return Status The domain deletion status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The domain deletion status.
                     * @param _status The domain deletion status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The operation.
                     * @return Operation The operation.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置The operation.
                     * @param _operation The operation.
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * The domain ID.
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * The domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * The domain deletion status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The operation.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETEDOMAINBATCHDETAIL_H_
