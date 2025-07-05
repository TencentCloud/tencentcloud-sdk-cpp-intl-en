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
                * Video retrieval task information
                */
                class RestoreMediaTask : public AbstractModel
                {
                public:
                    RestoreMediaTask();
                    ~RestoreMediaTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File ID
                     * @return FileId File ID
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置File ID
                     * @param _fileId File ID
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
                     * 获取Original storage class
                     * @return OriginalStorageClass Original storage class
                     * 
                     */
                    std::string GetOriginalStorageClass() const;

                    /**
                     * 设置Original storage class
                     * @param _originalStorageClass Original storage class
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
                     * 获取Target storage class. For temporary retrieval, the target storage class is the same as the original.
                     * @return TargetStorageClass Target storage class. For temporary retrieval, the target storage class is the same as the original.
                     * 
                     */
                    std::string GetTargetStorageClass() const;

                    /**
                     * 设置Target storage class. For temporary retrieval, the target storage class is the same as the original.
                     * @param _targetStorageClass Target storage class. For temporary retrieval, the target storage class is the same as the original.
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
                     * 获取Retrieval mode. Valid values:
<li>Expedited</li>
<li>Standard</li>
<li>Bulk</li>
                     * @return RestoreTier Retrieval mode. Valid values:
<li>Expedited</li>
<li>Standard</li>
<li>Bulk</li>
                     * 
                     */
                    std::string GetRestoreTier() const;

                    /**
                     * 设置Retrieval mode. Valid values:
<li>Expedited</li>
<li>Standard</li>
<li>Bulk</li>
                     * @param _restoreTier Retrieval mode. Valid values:
<li>Expedited</li>
<li>Standard</li>
<li>Bulk</li>
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
                     * 获取Validity period (days) for a temporary copy. `0` indicates permanent retrieval.
                     * @return RestoreDay Validity period (days) for a temporary copy. `0` indicates permanent retrieval.
                     * 
                     */
                    int64_t GetRestoreDay() const;

                    /**
                     * 设置Validity period (days) for a temporary copy. `0` indicates permanent retrieval.
                     * @param _restoreDay Validity period (days) for a temporary copy. `0` indicates permanent retrieval.
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
                     * 获取This field has been disused.
                     * @return Status This field has been disused.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置This field has been disused.
                     * @param _status This field has been disused.
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
                     * 获取This field has been disused.
                     * @return Message This field has been disused.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置This field has been disused.
                     * @param _message This field has been disused.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * File ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Original storage class
                     */
                    std::string m_originalStorageClass;
                    bool m_originalStorageClassHasBeenSet;

                    /**
                     * Target storage class. For temporary retrieval, the target storage class is the same as the original.
                     */
                    std::string m_targetStorageClass;
                    bool m_targetStorageClassHasBeenSet;

                    /**
                     * Retrieval mode. Valid values:
<li>Expedited</li>
<li>Standard</li>
<li>Bulk</li>
                     */
                    std::string m_restoreTier;
                    bool m_restoreTierHasBeenSet;

                    /**
                     * Validity period (days) for a temporary copy. `0` indicates permanent retrieval.
                     */
                    int64_t m_restoreDay;
                    bool m_restoreDayHasBeenSet;

                    /**
                     * This field has been disused.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * This field has been disused.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIATASK_H_
