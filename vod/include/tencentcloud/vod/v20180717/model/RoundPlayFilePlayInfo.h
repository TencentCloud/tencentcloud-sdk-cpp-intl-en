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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYFILEPLAYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYFILEPLAYINFO_H_

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
                class RoundPlayFilePlayInfo : public AbstractModel
                {
                public:
                    RoundPlayFilePlayInfo();
                    ~RoundPlayFilePlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ItemId 
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置
                     * @param _itemId 
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

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
                     * @return StartPlayTime 
                     * 
                     */
                    std::string GetStartPlayTime() const;

                    /**
                     * 设置
                     * @param _startPlayTime 
                     * 
                     */
                    void SetStartPlayTime(const std::string& _startPlayTime);

                    /**
                     * 判断参数 StartPlayTime 是否已赋值
                     * @return StartPlayTime 是否已赋值
                     * 
                     */
                    bool StartPlayTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Duration 
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置
                     * @param _duration 
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取
                     * @return Progress 
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置
                     * @param _progress 
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_startPlayTime;
                    bool m_startPlayTimeHasBeenSet;

                    /**
                     * 
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYFILEPLAYINFO_H_
