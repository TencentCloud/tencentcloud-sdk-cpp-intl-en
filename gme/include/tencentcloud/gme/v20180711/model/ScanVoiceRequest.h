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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_SCANVOICEREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_SCANVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/Task.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * ScanVoice request structure.
                */
                class ScanVoiceRequest : public AbstractModel
                {
                public:
                    ScanVoiceRequest();
                    ~ScanVoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID, which is obtained when you create an application in the [GME console - Service Management](https://console.cloud.tencent.com/gamegme).
                     * @return BizId Application ID, which is obtained when you create an application in the [GME console - Service Management](https://console.cloud.tencent.com/gamegme).
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置Application ID, which is obtained when you create an application in the [GME console - Service Management](https://console.cloud.tencent.com/gamegme).
                     * @param BizId Application ID, which is obtained when you create an application in the [GME console - Service Management](https://console.cloud.tencent.com/gamegme).
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取Voice detection scenario. It must be `default`. See the <a href="#Label_Value">Label description</a> as the result.
                     * @return Scenes Voice detection scenario. It must be `default`. See the <a href="#Label_Value">Label description</a> as the result.
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置Voice detection scenario. It must be `default`. See the <a href="#Label_Value">Label description</a> as the result.
                     * @param Scenes Voice detection scenario. It must be `default`. See the <a href="#Label_Value">Label description</a> as the result.
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     */
                    bool ScenesHasBeenSet() const;

                    /**
                     * 获取Whether it is a live stream. Values: `false` (voice file), `true` (live stream).
                     * @return Live Whether it is a live stream. Values: `false` (voice file), `true` (live stream).
                     */
                    bool GetLive() const;

                    /**
                     * 设置Whether it is a live stream. Values: `false` (voice file), `true` (live stream).
                     * @param Live Whether it is a live stream. Values: `false` (voice file), `true` (live stream).
                     */
                    void SetLive(const bool& _live);

                    /**
                     * 判断参数 Live 是否已赋值
                     * @return Live 是否已赋值
                     */
                    bool LiveHasBeenSet() const;

                    /**
                     * 获取Voice detection task list. Up to 100 tasks can be added in the list. 
<li>`DataId`: Unique data ID</li>
<li>`Url`: URL-encoded data file URL, which is a pull address if the detected voice is a stream</li>
                     * @return Tasks Voice detection task list. Up to 100 tasks can be added in the list. 
<li>`DataId`: Unique data ID</li>
<li>`Url`: URL-encoded data file URL, which is a pull address if the detected voice is a stream</li>
                     */
                    std::vector<Task> GetTasks() const;

                    /**
                     * 设置Voice detection task list. Up to 100 tasks can be added in the list. 
<li>`DataId`: Unique data ID</li>
<li>`Url`: URL-encoded data file URL, which is a pull address if the detected voice is a stream</li>
                     * @param Tasks Voice detection task list. Up to 100 tasks can be added in the list. 
<li>`DataId`: Unique data ID</li>
<li>`Url`: URL-encoded data file URL, which is a pull address if the detected voice is a stream</li>
                     */
                    void SetTasks(const std::vector<Task>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Async callback address for detection result. For more information, please see the <a href="#Callback_Declare">Callback description</a> above. (Note: If this field is empty, the detection result can only be queried by calling the `DescribeScanResultList` API.)
                     * @return Callback Async callback address for detection result. For more information, please see the <a href="#Callback_Declare">Callback description</a> above. (Note: If this field is empty, the detection result can only be queried by calling the `DescribeScanResultList` API.)
                     */
                    std::string GetCallback() const;

                    /**
                     * 设置Async callback address for detection result. For more information, please see the <a href="#Callback_Declare">Callback description</a> above. (Note: If this field is empty, the detection result can only be queried by calling the `DescribeScanResultList` API.)
                     * @param Callback Async callback address for detection result. For more information, please see the <a href="#Callback_Declare">Callback description</a> above. (Note: If this field is empty, the detection result can only be queried by calling the `DescribeScanResultList` API.)
                     */
                    void SetCallback(const std::string& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取Language. Chinese will be used if it is left empty.
                     * @return Lang Language. Chinese will be used if it is left empty.
                     */
                    std::string GetLang() const;

                    /**
                     * 设置Language. Chinese will be used if it is left empty.
                     * @param Lang Language. Chinese will be used if it is left empty.
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     */
                    bool LangHasBeenSet() const;

                private:

                    /**
                     * Application ID, which is obtained when you create an application in the [GME console - Service Management](https://console.cloud.tencent.com/gamegme).
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * Voice detection scenario. It must be `default`. See the <a href="#Label_Value">Label description</a> as the result.
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                    /**
                     * Whether it is a live stream. Values: `false` (voice file), `true` (live stream).
                     */
                    bool m_live;
                    bool m_liveHasBeenSet;

                    /**
                     * Voice detection task list. Up to 100 tasks can be added in the list. 
<li>`DataId`: Unique data ID</li>
<li>`Url`: URL-encoded data file URL, which is a pull address if the detected voice is a stream</li>
                     */
                    std::vector<Task> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Async callback address for detection result. For more information, please see the <a href="#Callback_Declare">Callback description</a> above. (Note: If this field is empty, the detection result can only be queried by calling the `DescribeScanResultList` API.)
                     */
                    std::string m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * Language. Chinese will be used if it is left empty.
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_SCANVOICEREQUEST_H_
