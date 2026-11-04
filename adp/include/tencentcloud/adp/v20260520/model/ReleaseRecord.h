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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_RELEASERECORD_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_RELEASERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * [Data structure definition] Release record
                */
                class ReleaseRecord : public AbstractModel
                {
                public:
                    ReleaseRecord();
                    ~ReleaseRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether it can be exported
                     * @return CanExport Whether it can be exported
                     * 
                     */
                    bool GetCanExport() const;

                    /**
                     * 设置Whether it can be exported
                     * @param _canExport Whether it can be exported
                     * 
                     */
                    void SetCanExport(const bool& _canExport);

                    /**
                     * 判断参数 CanExport 是否已赋值
                     * @return CanExport 是否已赋值
                     * 
                     */
                    bool CanExportHasBeenSet() const;

                    /**
                     * 获取Whether it can be rolled back
                     * @return CanRollback Whether it can be rolled back
                     * 
                     */
                    bool GetCanRollback() const;

                    /**
                     * 设置Whether it can be rolled back
                     * @param _canRollback Whether it can be rolled back
                     * 
                     */
                    void SetCanRollback(const bool& _canRollback);

                    /**
                     * 判断参数 CanRollback 是否已赋值
                     * @return CanRollback 是否已赋值
                     * 
                     */
                    bool CanRollbackHasBeenSet() const;

                    /**
                     * 获取Release description
                     * @return Description Release description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Release description
                     * @param _description Release description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Number of release failures
                     * @return FailCount Number of release failures
                     * 
                     */
                    uint64_t GetFailCount() const;

                    /**
                     * 设置Number of release failures
                     * @param _failCount Number of release failures
                     * 
                     */
                    void SetFailCount(const uint64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取Failure cause.
                     * @return Reason Failure cause.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Failure cause.
                     * @param _reason Failure cause.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Release ID
                     * @return ReleaseId Release ID
                     * 
                     */
                    std::string GetReleaseId() const;

                    /**
                     * 设置Release ID
                     * @param _releaseId Release ID
                     * 
                     */
                    void SetReleaseId(const std::string& _releaseId);

                    /**
                     * 判断参数 ReleaseId 是否已赋值
                     * @return ReleaseId 是否已赋值
                     * 
                     */
                    bool ReleaseIdHasBeenSet() const;

                    /**
                     * 获取Release version
                     * @return ReleaseVersion Release version
                     * 
                     */
                    std::string GetReleaseVersion() const;

                    /**
                     * 设置Release version
                     * @param _releaseVersion Release version
                     * 
                     */
                    void SetReleaseVersion(const std::string& _releaseVersion);

                    /**
                     * 判断参数 ReleaseVersion 是否已赋值
                     * @return ReleaseVersion 是否已赋值
                     * 
                     */
                    bool ReleaseVersionHasBeenSet() const;

                    /**
                     * 获取Publishing status. Enumeration values: 1: To be released, 2: Releasing, 3: Released successfully, 4: Release failure, 5: Under review, 6: Review successful, 7: Review failed, 8: Release success callback processing, 9: Release suspended, 10: Appeal under review, 11: Appeal review passed, 12: Appeal review not approved
                     * @return Status Publishing status. Enumeration values: 1: To be released, 2: Releasing, 3: Released successfully, 4: Release failure, 5: Under review, 6: Review successful, 7: Review failed, 8: Release success callback processing, 9: Release suspended, 10: Appeal under review, 11: Appeal review passed, 12: Appeal review not approved
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Publishing status. Enumeration values: 1: To be released, 2: Releasing, 3: Released successfully, 4: Release failure, 5: Under review, 6: Review successful, 7: Review failed, 8: Release success callback processing, 9: Release suspended, 10: Appeal under review, 11: Appeal review passed, 12: Appeal review not approved
                     * @param _status Publishing status. Enumeration values: 1: To be released, 2: Releasing, 3: Released successfully, 4: Release failure, 5: Under review, 6: Review successful, 7: Review failed, 8: Release success callback processing, 9: Release suspended, 10: Appeal under review, 11: Appeal review passed, 12: Appeal review not approved
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
                     * 获取Status description.
                     * @return StatusDescription Status description.
                     * 
                     */
                    std::string GetStatusDescription() const;

                    /**
                     * 设置Status description.
                     * @param _statusDescription Status description.
                     * 
                     */
                    void SetStatusDescription(const std::string& _statusDescription);

                    /**
                     * 判断参数 StatusDescription 是否已赋值
                     * @return StatusDescription 是否已赋值
                     * 
                     */
                    bool StatusDescriptionHasBeenSet() const;

                    /**
                     * 获取Number of successful releases
                     * @return SuccessCount Number of successful releases
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 设置Number of successful releases
                     * @param _successCount Number of successful releases
                     * 
                     */
                    void SetSuccessCount(const uint64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Update time (Unix timestamp in seconds).
                     * @return UpdateTime Update time (Unix timestamp in seconds).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time (Unix timestamp in seconds).
                     * @param _updateTime Update time (Unix timestamp in seconds).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Releaser
                     * @return Updater Releaser
                     * 
                     */
                    std::string GetUpdater() const;

                    /**
                     * 设置Releaser
                     * @param _updater Releaser
                     * 
                     */
                    void SetUpdater(const std::string& _updater);

                    /**
                     * 判断参数 Updater 是否已赋值
                     * @return Updater 是否已赋值
                     * 
                     */
                    bool UpdaterHasBeenSet() const;

                private:

                    /**
                     * Whether it can be exported
                     */
                    bool m_canExport;
                    bool m_canExportHasBeenSet;

                    /**
                     * Whether it can be rolled back
                     */
                    bool m_canRollback;
                    bool m_canRollbackHasBeenSet;

                    /**
                     * Release description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Number of release failures
                     */
                    uint64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * Failure cause.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Release ID
                     */
                    std::string m_releaseId;
                    bool m_releaseIdHasBeenSet;

                    /**
                     * Release version
                     */
                    std::string m_releaseVersion;
                    bool m_releaseVersionHasBeenSet;

                    /**
                     * Publishing status. Enumeration values: 1: To be released, 2: Releasing, 3: Released successfully, 4: Release failure, 5: Under review, 6: Review successful, 7: Review failed, 8: Release success callback processing, 9: Release suspended, 10: Appeal under review, 11: Appeal review passed, 12: Appeal review not approved
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status description.
                     */
                    std::string m_statusDescription;
                    bool m_statusDescriptionHasBeenSet;

                    /**
                     * Number of successful releases
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Update time (Unix timestamp in seconds).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Releaser
                     */
                    std::string m_updater;
                    bool m_updaterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RELEASERECORD_H_
