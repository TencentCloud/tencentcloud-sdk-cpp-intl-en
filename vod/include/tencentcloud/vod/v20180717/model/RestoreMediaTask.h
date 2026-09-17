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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIATASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIATASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class RestoreMediaTask : public AbstractModel
                {
                public:
                    RestoreMediaTask();
                    ~RestoreMediaTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return FileId 
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置
                     * @param _fileId 
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return OriginalStorageClass 
                     * 
                     */
                    std::string GetOriginalStorageClass() const;

                    /**
                     * 设置
                     * @param _originalStorageClass 
                     * 
                     */
                    void SetOriginalStorageClass(const std::string& _originalStorageClass);

                    /**
                     * 判断参数 OriginalStorageClass 是否已赋值
                     * @return OriginalStorageClass 是否已赋值
                     * 
                     */
                    bool OriginalStorageClassHasBeenSet() const;

                    /**
                     * 获取
                     * @return TargetStorageClass 
                     * 
                     */
                    std::string GetTargetStorageClass() const;

                    /**
                     * 设置
                     * @param _targetStorageClass 
                     * 
                     */
                    void SetTargetStorageClass(const std::string& _targetStorageClass);

                    /**
                     * 判断参数 TargetStorageClass 是否已赋值
                     * @return TargetStorageClass 是否已赋值
                     * 
                     */
                    bool TargetStorageClassHasBeenSet() const;

                    /**
                     * 获取
                     * @return RestoreTier 
                     * 
                     */
                    std::string GetRestoreTier() const;

                    /**
                     * 设置
                     * @param _restoreTier 
                     * 
                     */
                    void SetRestoreTier(const std::string& _restoreTier);

                    /**
                     * 判断参数 RestoreTier 是否已赋值
                     * @return RestoreTier 是否已赋值
                     * 
                     */
                    bool RestoreTierHasBeenSet() const;

                    /**
                     * 获取
                     * @return RestoreDay 
                     * 
                     */
                    int64_t GetRestoreDay() const;

                    /**
                     * 设置
                     * @param _restoreDay 
                     * 
                     */
                    void SetRestoreDay(const int64_t& _restoreDay);

                    /**
                     * 判断参数 RestoreDay 是否已赋值
                     * @return RestoreDay 是否已赋值
                     * 
                     */
                    bool RestoreDayHasBeenSet() const;

                    /**
                     * 获取
                     * @return Status 
                     * @deprecated
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
                     * @deprecated
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * @deprecated
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return Message 
                     * @deprecated
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置
                     * @param _message 
                     * @deprecated
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * @deprecated
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_originalStorageClass;
                    bool m_originalStorageClassHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_targetStorageClass;
                    bool m_targetStorageClassHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_restoreTier;
                    bool m_restoreTierHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_restoreDay;
                    bool m_restoreDayHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIATASK_H_
