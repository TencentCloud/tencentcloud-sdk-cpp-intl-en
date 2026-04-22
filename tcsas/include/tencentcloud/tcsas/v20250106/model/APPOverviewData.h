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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_APPOVERVIEWDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_APPOVERVIEWDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Superapp overview data details
                */
                class APPOverviewData : public AbstractModel
                {
                public:
                    APPOverviewData();
                    ~APPOverviewData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Superapp active device count
                     * @return AllActiveDeviceNum Superapp active device count
                     * 
                     */
                    int64_t GetAllActiveDeviceNum() const;

                    /**
                     * 设置Superapp active device count
                     * @param _allActiveDeviceNum Superapp active device count
                     * 
                     */
                    void SetAllActiveDeviceNum(const int64_t& _allActiveDeviceNum);

                    /**
                     * 判断参数 AllActiveDeviceNum 是否已赋值
                     * @return AllActiveDeviceNum 是否已赋值
                     * 
                     */
                    bool AllActiveDeviceNumHasBeenSet() const;

                    /**
                     * 获取Superapp new device count
                     * @return AllNewDeviceNum Superapp new device count
                     * 
                     */
                    int64_t GetAllNewDeviceNum() const;

                    /**
                     * 设置Superapp new device count
                     * @param _allNewDeviceNum Superapp new device count
                     * 
                     */
                    void SetAllNewDeviceNum(const int64_t& _allNewDeviceNum);

                    /**
                     * 判断参数 AllNewDeviceNum 是否已赋值
                     * @return AllNewDeviceNum 是否已赋值
                     * 
                     */
                    bool AllNewDeviceNumHasBeenSet() const;

                    /**
                     * 获取Mini program team count
                     * @return CorpNum Mini program team count
                     * 
                     */
                    int64_t GetCorpNum() const;

                    /**
                     * 设置Mini program team count
                     * @param _corpNum Mini program team count
                     * 
                     */
                    void SetCorpNum(const int64_t& _corpNum);

                    /**
                     * 判断参数 CorpNum 是否已赋值
                     * @return CorpNum 是否已赋值
                     * 
                     */
                    bool CorpNumHasBeenSet() const;

                    /**
                     * 获取Mini game active device count
                     * @return GameActiveDeviceNum Mini game active device count
                     * 
                     */
                    int64_t GetGameActiveDeviceNum() const;

                    /**
                     * 设置Mini game active device count
                     * @param _gameActiveDeviceNum Mini game active device count
                     * 
                     */
                    void SetGameActiveDeviceNum(const int64_t& _gameActiveDeviceNum);

                    /**
                     * 判断参数 GameActiveDeviceNum 是否已赋值
                     * @return GameActiveDeviceNum 是否已赋值
                     * 
                     */
                    bool GameActiveDeviceNumHasBeenSet() const;

                    /**
                     * 获取Mini game new device count
                     * @return GameNewDeviceNum Mini game new device count
                     * 
                     */
                    int64_t GetGameNewDeviceNum() const;

                    /**
                     * 设置Mini game new device count
                     * @param _gameNewDeviceNum Mini game new device count
                     * 
                     */
                    void SetGameNewDeviceNum(const int64_t& _gameNewDeviceNum);

                    /**
                     * 判断参数 GameNewDeviceNum 是否已赋值
                     * @return GameNewDeviceNum 是否已赋值
                     * 
                     */
                    bool GameNewDeviceNumHasBeenSet() const;

                    /**
                     * 获取Created mini program count

                     * @return MiniAppNum Created mini program count

                     * 
                     */
                    int64_t GetMiniAppNum() const;

                    /**
                     * 设置Created mini program count

                     * @param _miniAppNum Created mini program count

                     * 
                     */
                    void SetMiniAppNum(const int64_t& _miniAppNum);

                    /**
                     * 判断参数 MiniAppNum 是否已赋值
                     * @return MiniAppNum 是否已赋值
                     * 
                     */
                    bool MiniAppNumHasBeenSet() const;

                    /**
                     * 获取Created mini game count

                     * @return MngNum Created mini game count

                     * 
                     */
                    int64_t GetMngNum() const;

                    /**
                     * 设置Created mini game count

                     * @param _mngNum Created mini game count

                     * 
                     */
                    void SetMngNum(const int64_t& _mngNum);

                    /**
                     * 判断参数 MngNum 是否已赋值
                     * @return MngNum 是否已赋值
                     * 
                     */
                    bool MngNumHasBeenSet() const;

                    /**
                     * 获取Mini program new device count
                     * @return NewDeviceNum Mini program new device count
                     * 
                     */
                    int64_t GetNewDeviceNum() const;

                    /**
                     * 设置Mini program new device count
                     * @param _newDeviceNum Mini program new device count
                     * 
                     */
                    void SetNewDeviceNum(const int64_t& _newDeviceNum);

                    /**
                     * 判断参数 NewDeviceNum 是否已赋值
                     * @return NewDeviceNum 是否已赋值
                     * 
                     */
                    bool NewDeviceNumHasBeenSet() const;

                    /**
                     * 获取Released mini program count

                     * @return OnlineMiniAppNum Released mini program count

                     * 
                     */
                    int64_t GetOnlineMiniAppNum() const;

                    /**
                     * 设置Released mini program count

                     * @param _onlineMiniAppNum Released mini program count

                     * 
                     */
                    void SetOnlineMiniAppNum(const int64_t& _onlineMiniAppNum);

                    /**
                     * 判断参数 OnlineMiniAppNum 是否已赋值
                     * @return OnlineMiniAppNum 是否已赋值
                     * 
                     */
                    bool OnlineMiniAppNumHasBeenSet() const;

                    /**
                     * 获取Released mini game count

                     * @return OnlineMngNum Released mini game count

                     * 
                     */
                    int64_t GetOnlineMngNum() const;

                    /**
                     * 设置Released mini game count

                     * @param _onlineMngNum Released mini game count

                     * 
                     */
                    void SetOnlineMngNum(const int64_t& _onlineMngNum);

                    /**
                     * 判断参数 OnlineMngNum 是否已赋值
                     * @return OnlineMngNum 是否已赋值
                     * 
                     */
                    bool OnlineMngNumHasBeenSet() const;

                    /**
                     * 获取Mini program active device count
                     * @return VisitNum Mini program active device count
                     * 
                     */
                    int64_t GetVisitNum() const;

                    /**
                     * 设置Mini program active device count
                     * @param _visitNum Mini program active device count
                     * 
                     */
                    void SetVisitNum(const int64_t& _visitNum);

                    /**
                     * 判断参数 VisitNum 是否已赋值
                     * @return VisitNum 是否已赋值
                     * 
                     */
                    bool VisitNumHasBeenSet() const;

                    /**
                     * 获取Data refresh timestamp
                     * @return FlushTime Data refresh timestamp
                     * 
                     */
                    std::string GetFlushTime() const;

                    /**
                     * 设置Data refresh timestamp
                     * @param _flushTime Data refresh timestamp
                     * 
                     */
                    void SetFlushTime(const std::string& _flushTime);

                    /**
                     * 判断参数 FlushTime 是否已赋值
                     * @return FlushTime 是否已赋值
                     * 
                     */
                    bool FlushTimeHasBeenSet() const;

                private:

                    /**
                     * Superapp active device count
                     */
                    int64_t m_allActiveDeviceNum;
                    bool m_allActiveDeviceNumHasBeenSet;

                    /**
                     * Superapp new device count
                     */
                    int64_t m_allNewDeviceNum;
                    bool m_allNewDeviceNumHasBeenSet;

                    /**
                     * Mini program team count
                     */
                    int64_t m_corpNum;
                    bool m_corpNumHasBeenSet;

                    /**
                     * Mini game active device count
                     */
                    int64_t m_gameActiveDeviceNum;
                    bool m_gameActiveDeviceNumHasBeenSet;

                    /**
                     * Mini game new device count
                     */
                    int64_t m_gameNewDeviceNum;
                    bool m_gameNewDeviceNumHasBeenSet;

                    /**
                     * Created mini program count

                     */
                    int64_t m_miniAppNum;
                    bool m_miniAppNumHasBeenSet;

                    /**
                     * Created mini game count

                     */
                    int64_t m_mngNum;
                    bool m_mngNumHasBeenSet;

                    /**
                     * Mini program new device count
                     */
                    int64_t m_newDeviceNum;
                    bool m_newDeviceNumHasBeenSet;

                    /**
                     * Released mini program count

                     */
                    int64_t m_onlineMiniAppNum;
                    bool m_onlineMiniAppNumHasBeenSet;

                    /**
                     * Released mini game count

                     */
                    int64_t m_onlineMngNum;
                    bool m_onlineMngNumHasBeenSet;

                    /**
                     * Mini program active device count
                     */
                    int64_t m_visitNum;
                    bool m_visitNumHasBeenSet;

                    /**
                     * Data refresh timestamp
                     */
                    std::string m_flushTime;
                    bool m_flushTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_APPOVERVIEWDATA_H_
