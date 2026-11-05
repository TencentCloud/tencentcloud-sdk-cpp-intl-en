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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCLIFECYCLE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCLIFECYCLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ExpirationPolicy.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Document lifecycle information
                */
                class DocLifecycle : public AbstractModel
                {
                public:
                    DocLifecycle();
                    ~DocLifecycle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Creation time (Unix seconds).</p>
                     * @return CreateTime <p>Creation time (Unix seconds).</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time (Unix seconds).</p>
                     * @param _createTime <p>Creation time (Unix seconds).</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * @return ExpirationPolicy <p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * 
                     */
                    ExpirationPolicy GetExpirationPolicy() const;

                    /**
                     * 设置<p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * @param _expirationPolicy <p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * 
                     */
                    void SetExpirationPolicy(const ExpirationPolicy& _expirationPolicy);

                    /**
                     * 判断参数 ExpirationPolicy 是否已赋值
                     * @return ExpirationPolicy 是否已赋值
                     * 
                     */
                    bool ExpirationPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Document status: 1=parsing, 2=parsing failure, 3=import failed, 4=under review, 5=review failure, 6=Learning, 7=learning failed, 8=import complete, 9=expired, 10=quota invalid, 11=quota recovering, 12=rename review failure, 13=rename appeal failure, 14=manual appeal in progress, 15=manual appeal failure<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOC_STATUS_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_STATUS_PARSING</td><td>1</td><td>Parsing</td></tr><tr><td>DOC_STATUS_PARSE_FAIL</td><td>2</td><td>Parsing failure</td></tr><tr><td>DOC_STATUS_IMPORT_FAIL</td><td>3</td><td>Import failed</td></tr><tr><td>DOC_STATUS_AUDITING</td><td>4</td><td>Under review</td></tr><tr><td>DOC_STATUS_AUDIT_FAIL</td><td>5</td><td>Review failure</td></tr><tr><td>DOC_STATUS_LEARNING</td><td>6</td><td>Learning</td></tr><tr><td>DOC_STATUS_LEARN_FAIL</td><td>7</td><td>Learning failed</td></tr><tr><td>DOC_STATUS_IMPORTED</td><td>8</td><td>Import complete</td></tr><tr><td>DOC_STATUS_EXPIRED</td><td>9</td><td>Expired</td></tr><tr><td>DOC_STATUS_QUOTA_INVALID</td><td>10</td><td>Quota invalid</td></tr><tr><td>DOC_STATUS_QUOTA_RECOVERING</td><td>11</td><td>Quota recovering</td></tr><tr><td>DOC_STATUS_RENAME_AUDIT_FAIL</td><td>12</td><td>Rename review failure</td></tr><tr><td>DOC_STATUS_RENAME_APPEAL_FAIL</td><td>13</td><td>Rename appeal failure</td></tr><tr><td>DOC_STATUS_MANUAL_APPEALING</td><td>14</td><td>Manual appeal in progress</td></tr><tr><td>DOC_STATUS_MANUAL_APPEAL_FAIL</td><td>15</td><td>Manual appeal failure</td></tr></tbody></table></p>
                     * @return Status <p>Document status: 1=parsing, 2=parsing failure, 3=import failed, 4=under review, 5=review failure, 6=Learning, 7=learning failed, 8=import complete, 9=expired, 10=quota invalid, 11=quota recovering, 12=rename review failure, 13=rename appeal failure, 14=manual appeal in progress, 15=manual appeal failure<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOC_STATUS_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_STATUS_PARSING</td><td>1</td><td>Parsing</td></tr><tr><td>DOC_STATUS_PARSE_FAIL</td><td>2</td><td>Parsing failure</td></tr><tr><td>DOC_STATUS_IMPORT_FAIL</td><td>3</td><td>Import failed</td></tr><tr><td>DOC_STATUS_AUDITING</td><td>4</td><td>Under review</td></tr><tr><td>DOC_STATUS_AUDIT_FAIL</td><td>5</td><td>Review failure</td></tr><tr><td>DOC_STATUS_LEARNING</td><td>6</td><td>Learning</td></tr><tr><td>DOC_STATUS_LEARN_FAIL</td><td>7</td><td>Learning failed</td></tr><tr><td>DOC_STATUS_IMPORTED</td><td>8</td><td>Import complete</td></tr><tr><td>DOC_STATUS_EXPIRED</td><td>9</td><td>Expired</td></tr><tr><td>DOC_STATUS_QUOTA_INVALID</td><td>10</td><td>Quota invalid</td></tr><tr><td>DOC_STATUS_QUOTA_RECOVERING</td><td>11</td><td>Quota recovering</td></tr><tr><td>DOC_STATUS_RENAME_AUDIT_FAIL</td><td>12</td><td>Rename review failure</td></tr><tr><td>DOC_STATUS_RENAME_APPEAL_FAIL</td><td>13</td><td>Rename appeal failure</td></tr><tr><td>DOC_STATUS_MANUAL_APPEALING</td><td>14</td><td>Manual appeal in progress</td></tr><tr><td>DOC_STATUS_MANUAL_APPEAL_FAIL</td><td>15</td><td>Manual appeal failure</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Document status: 1=parsing, 2=parsing failure, 3=import failed, 4=under review, 5=review failure, 6=Learning, 7=learning failed, 8=import complete, 9=expired, 10=quota invalid, 11=quota recovering, 12=rename review failure, 13=rename appeal failure, 14=manual appeal in progress, 15=manual appeal failure<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOC_STATUS_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_STATUS_PARSING</td><td>1</td><td>Parsing</td></tr><tr><td>DOC_STATUS_PARSE_FAIL</td><td>2</td><td>Parsing failure</td></tr><tr><td>DOC_STATUS_IMPORT_FAIL</td><td>3</td><td>Import failed</td></tr><tr><td>DOC_STATUS_AUDITING</td><td>4</td><td>Under review</td></tr><tr><td>DOC_STATUS_AUDIT_FAIL</td><td>5</td><td>Review failure</td></tr><tr><td>DOC_STATUS_LEARNING</td><td>6</td><td>Learning</td></tr><tr><td>DOC_STATUS_LEARN_FAIL</td><td>7</td><td>Learning failed</td></tr><tr><td>DOC_STATUS_IMPORTED</td><td>8</td><td>Import complete</td></tr><tr><td>DOC_STATUS_EXPIRED</td><td>9</td><td>Expired</td></tr><tr><td>DOC_STATUS_QUOTA_INVALID</td><td>10</td><td>Quota invalid</td></tr><tr><td>DOC_STATUS_QUOTA_RECOVERING</td><td>11</td><td>Quota recovering</td></tr><tr><td>DOC_STATUS_RENAME_AUDIT_FAIL</td><td>12</td><td>Rename review failure</td></tr><tr><td>DOC_STATUS_RENAME_APPEAL_FAIL</td><td>13</td><td>Rename appeal failure</td></tr><tr><td>DOC_STATUS_MANUAL_APPEALING</td><td>14</td><td>Manual appeal in progress</td></tr><tr><td>DOC_STATUS_MANUAL_APPEAL_FAIL</td><td>15</td><td>Manual appeal failure</td></tr></tbody></table></p>
                     * @param _status <p>Document status: 1=parsing, 2=parsing failure, 3=import failed, 4=under review, 5=review failure, 6=Learning, 7=learning failed, 8=import complete, 9=expired, 10=quota invalid, 11=quota recovering, 12=rename review failure, 13=rename appeal failure, 14=manual appeal in progress, 15=manual appeal failure<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOC_STATUS_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_STATUS_PARSING</td><td>1</td><td>Parsing</td></tr><tr><td>DOC_STATUS_PARSE_FAIL</td><td>2</td><td>Parsing failure</td></tr><tr><td>DOC_STATUS_IMPORT_FAIL</td><td>3</td><td>Import failed</td></tr><tr><td>DOC_STATUS_AUDITING</td><td>4</td><td>Under review</td></tr><tr><td>DOC_STATUS_AUDIT_FAIL</td><td>5</td><td>Review failure</td></tr><tr><td>DOC_STATUS_LEARNING</td><td>6</td><td>Learning</td></tr><tr><td>DOC_STATUS_LEARN_FAIL</td><td>7</td><td>Learning failed</td></tr><tr><td>DOC_STATUS_IMPORTED</td><td>8</td><td>Import complete</td></tr><tr><td>DOC_STATUS_EXPIRED</td><td>9</td><td>Expired</td></tr><tr><td>DOC_STATUS_QUOTA_INVALID</td><td>10</td><td>Quota invalid</td></tr><tr><td>DOC_STATUS_QUOTA_RECOVERING</td><td>11</td><td>Quota recovering</td></tr><tr><td>DOC_STATUS_RENAME_AUDIT_FAIL</td><td>12</td><td>Rename review failure</td></tr><tr><td>DOC_STATUS_RENAME_APPEAL_FAIL</td><td>13</td><td>Rename appeal failure</td></tr><tr><td>DOC_STATUS_MANUAL_APPEALING</td><td>14</td><td>Manual appeal in progress</td></tr><tr><td>DOC_STATUS_MANUAL_APPEAL_FAIL</td><td>15</td><td>Manual appeal failure</td></tr></tbody></table></p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Status description</p>
                     * @return StatusDesc <p>Status description</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>Status description</p>
                     * @param _statusDesc <p>Status description</p>
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>Status additional information</p>
                     * @return StatusMessage <p>Status additional information</p>
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置<p>Status additional information</p>
                     * @param _statusMessage <p>Status additional information</p>
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                    /**
                     * 获取<p>Update time (Unix seconds)</p>
                     * @return UpdateTime <p>Update time (Unix seconds)</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time (Unix seconds)</p>
                     * @param _updateTime <p>Update time (Unix seconds)</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Creation time (Unix seconds).</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     */
                    ExpirationPolicy m_expirationPolicy;
                    bool m_expirationPolicyHasBeenSet;

                    /**
                     * <p>Document status: 1=parsing, 2=parsing failure, 3=import failed, 4=under review, 5=review failure, 6=Learning, 7=learning failed, 8=import complete, 9=expired, 10=quota invalid, 11=quota recovering, 12=rename review failure, 13=rename appeal failure, 14=manual appeal in progress, 15=manual appeal failure<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>DOC_STATUS_UNKNOWN</td><td>0</td><td></td></tr><tr><td>DOC_STATUS_PARSING</td><td>1</td><td>Parsing</td></tr><tr><td>DOC_STATUS_PARSE_FAIL</td><td>2</td><td>Parsing failure</td></tr><tr><td>DOC_STATUS_IMPORT_FAIL</td><td>3</td><td>Import failed</td></tr><tr><td>DOC_STATUS_AUDITING</td><td>4</td><td>Under review</td></tr><tr><td>DOC_STATUS_AUDIT_FAIL</td><td>5</td><td>Review failure</td></tr><tr><td>DOC_STATUS_LEARNING</td><td>6</td><td>Learning</td></tr><tr><td>DOC_STATUS_LEARN_FAIL</td><td>7</td><td>Learning failed</td></tr><tr><td>DOC_STATUS_IMPORTED</td><td>8</td><td>Import complete</td></tr><tr><td>DOC_STATUS_EXPIRED</td><td>9</td><td>Expired</td></tr><tr><td>DOC_STATUS_QUOTA_INVALID</td><td>10</td><td>Quota invalid</td></tr><tr><td>DOC_STATUS_QUOTA_RECOVERING</td><td>11</td><td>Quota recovering</td></tr><tr><td>DOC_STATUS_RENAME_AUDIT_FAIL</td><td>12</td><td>Rename review failure</td></tr><tr><td>DOC_STATUS_RENAME_APPEAL_FAIL</td><td>13</td><td>Rename appeal failure</td></tr><tr><td>DOC_STATUS_MANUAL_APPEALING</td><td>14</td><td>Manual appeal in progress</td></tr><tr><td>DOC_STATUS_MANUAL_APPEAL_FAIL</td><td>15</td><td>Manual appeal failure</td></tr></tbody></table></p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Status description</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>Status additional information</p>
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                    /**
                     * <p>Update time (Unix seconds)</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCLIFECYCLE_H_
